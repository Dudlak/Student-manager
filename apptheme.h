#ifndef APPTHEME_H
#define APPTHEME_H

#include <QObject>
#include <QColor>
#include <QFont>
#include <QSettings>
#include <QString>

class AppTheme : public QObject
{
    Q_OBJECT

    // Цвета
    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor NOTIFY themeChanged)
    Q_PROPERTY(QColor accentColor READ accentColor WRITE setAccentColor NOTIFY themeChanged)
    Q_PROPERTY(QColor textColor READ textColor WRITE setTextColor NOTIFY themeChanged)
    Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor NOTIFY themeChanged)

    // Шрифты (размеры в пикселях)
    Q_PROPERTY(int smallFontSize READ smallFontSize WRITE setSmallFontSize NOTIFY themeChanged)
    Q_PROPERTY(int normalFontSize READ normalFontSize WRITE setNormalFontSize NOTIFY themeChanged)
    Q_PROPERTY(int largeFontSize READ largeFontSize WRITE setLargeFontSize NOTIFY themeChanged)
    Q_PROPERTY(int titleFontSize READ titleFontSize WRITE setTitleFontSize NOTIFY themeChanged)

    // Скругление
    Q_PROPERTY(int borderRadius READ borderRadius WRITE setBorderRadius NOTIFY themeChanged)

    // Имя темы
    Q_PROPERTY(QString themeName READ themeName WRITE setThemeName NOTIFY themeChanged)

public:
    explicit AppTheme(QObject *parent = 0);

    // Геттеры
    QColor backgroundColor() const { return m_backgroundColor; }
    QColor accentColor() const { return m_accentColor; }
    QColor textColor() const { return m_textColor; }
    QColor borderColor() const { return m_borderColor; }

    int smallFontSize() const { return m_smallFontSize; }
    int normalFontSize() const { return m_normalFontSize; }
    int largeFontSize() const { return m_largeFontSize; }
    int titleFontSize() const { return m_titleFontSize; }

    int borderRadius() const { return m_borderRadius; }

    QString themeName() const { return m_themeName; }

public slots:
    // Сеттеры
    void setBackgroundColor(const QColor &color);
    void setAccentColor(const QColor &color);
    void setTextColor(const QColor &color);
    void setBorderColor(const QColor &color);

    void setSmallFontSize(int size);
    void setNormalFontSize(int size);
    void setLargeFontSize(int size);
    void setTitleFontSize(int size);

    void setBorderRadius(int radius);

    void setThemeName(const QString &name);

    // Загрузка/сохранение
    void loadSettings();
    void saveSettings();

    // Загрузка предустановленной темы
    void loadLightTheme();
    void loadDarkTheme();

signals:
    void themeChanged();
    void themeSaved();

private:
    // Цвета
    QColor m_backgroundColor;
    QColor m_accentColor;
    QColor m_textColor;
    QColor m_borderColor;

    // Шрифты
    int m_smallFontSize;
    int m_normalFontSize;
    int m_largeFontSize;
    int m_titleFontSize;

    // Скругление
    int m_borderRadius;

    QString m_themeName;
};

#endif // APPTHEME_H
