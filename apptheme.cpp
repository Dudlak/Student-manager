#include "apptheme.h"
#include <QDebug>

AppTheme::AppTheme(QObject *parent) : QObject(parent)
{
    // Устанавливаем значения по умолчанию (светлая тема)
    loadLightTheme();

    // Загружаем сохранённые настройки
    loadSettings();
}

// ==================== Сеттеры ====================

void AppTheme::setBackgroundColor(const QColor &color)
{
    if (m_backgroundColor == color) return;
    m_backgroundColor = color;
    emit themeChanged();
}

void AppTheme::setAccentColor(const QColor &color)
{
    if (m_accentColor == color) return;
    m_accentColor = color;
    emit themeChanged();
}

void AppTheme::setTextColor(const QColor &color)
{
    if (m_textColor == color) return;
    m_textColor = color;
    emit themeChanged();
}

void AppTheme::setBorderColor(const QColor &color)
{
    if (m_borderColor == color) return;
    m_borderColor = color;
    emit themeChanged();
}

void AppTheme::setSmallFontSize(int size)
{
    if (size < 8) size = 8;
    if (m_smallFontSize == size) return;
    m_smallFontSize = size;
    emit themeChanged();
}

void AppTheme::setNormalFontSize(int size)
{
    if (size < 8) size = 8;
    if (m_normalFontSize == size) return;
    m_normalFontSize = size;
    emit themeChanged();
}

void AppTheme::setLargeFontSize(int size)
{
    if (size < 8) size = 8;
    if (m_largeFontSize == size) return;
    m_largeFontSize = size;
    emit themeChanged();
}

void AppTheme::setTitleFontSize(int size)
{
    if (size < 12) size = 12;
    if (m_titleFontSize == size) return;
    m_titleFontSize = size;
    emit themeChanged();
}

void AppTheme::setBorderRadius(int radius)
{
    if (radius < 0) radius = 0;
    if (m_borderRadius == radius) return;
    m_borderRadius = radius;
    emit themeChanged();
}

void AppTheme::setThemeName(const QString &name)
{
    if (m_themeName == name) return;
    m_themeName = name;
    emit themeChanged();
}

// ==================== Предустановленные темы ====================

void AppTheme::loadLightTheme()
{
    m_themeName = "Light";
    m_backgroundColor = QColor("#e0e0e0");
    m_accentColor = QColor("orange");
    m_textColor = QColor("#303030");
    m_borderColor = QColor("#303030");

    m_smallFontSize = 15;
    m_normalFontSize =20;
    m_largeFontSize = 25;
    m_titleFontSize = 30;

    m_borderRadius = 10;

    qDebug() << "Theme loaded:" << m_themeName;
    emit themeChanged();
}

void AppTheme::loadDarkTheme()
{
    m_themeName = "Dark";
    m_backgroundColor = QColor(33, 33, 33);   // #212121
    m_accentColor = QColor(33, 150, 243);     // #2196F3
    m_textColor = QColor(220, 220, 220);
    m_borderColor = QColor(220, 220, 220);

    m_smallFontSize = 15;
    m_normalFontSize =20;
    m_largeFontSize = 25;
    m_titleFontSize = 30;

    m_borderRadius = 10;

    qDebug() << "Theme loaded:" << m_themeName;
    emit themeChanged();
}

// ==================== Сохранение и загрузка ====================

void AppTheme::saveSettings()
{
    QSettings settings("Dudlak", "UITest");

    // Цвета
    settings.setValue("theme/backgroundColor", m_backgroundColor);
    settings.setValue("theme/accentColor", m_accentColor);
    settings.setValue("theme/textColor", m_textColor);
    settings.setValue("theme/borderColor", m_borderColor);

    // Шрифты
    settings.setValue("theme/smallFontSize", m_smallFontSize);
    settings.setValue("theme/normalFontSize", m_normalFontSize);
    settings.setValue("theme/largeFontSize", m_largeFontSize);
    settings.setValue("theme/titleFontSize", m_titleFontSize);

    // Скругление
    settings.setValue("theme/borderRadius", m_borderRadius);

    // Имя темы
    settings.setValue("theme/name", m_themeName);

    qDebug() << "Theme saved:" << m_themeName;

    emit themeSaved();
}

void AppTheme::loadSettings()
{
    QSettings settings("Dudlak", "UITest");

    if (settings.contains("theme/backgroundColor")) {
        m_backgroundColor = settings.value("theme/backgroundColor").value<QColor>();
        m_accentColor = settings.value("theme/accentColor").value<QColor>();
        m_textColor = settings.value("theme/textColor").value<QColor>();
        m_borderColor = settings.value("theme/borderColor").value<QColor>();

        m_smallFontSize = settings.value("theme/smallFontSize", 11).toInt();
        m_normalFontSize = settings.value("theme/normalFontSize", 14).toInt();
        m_largeFontSize = settings.value("theme/largeFontSize", 18).toInt();
        m_titleFontSize = settings.value("theme/titleFontSize", 24).toInt();

        m_borderRadius = settings.value("theme/borderRadius", 10).toInt();

        m_themeName = settings.value("theme/name", "Light").toString();

        qDebug() << "Theme loaded:" << m_themeName;
    } else {
        qDebug() << "No saved theme, using light theme";
    }

    emit themeChanged();
}
