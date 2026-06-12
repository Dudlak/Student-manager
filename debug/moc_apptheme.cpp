/****************************************************************************
** Meta object code from reading C++ file 'apptheme.h'
**
** Created: Fri 12. Jun 15:14:59 2026
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../apptheme.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apptheme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppTheme[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      10,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      25,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   38,    9,    9, 0x0a,
      71,   38,    9,    9, 0x0a,
      94,   38,    9,    9, 0x0a,
     115,   38,    9,    9, 0x0a,
     143,  138,    9,    9, 0x0a,
     165,  138,    9,    9, 0x0a,
     188,  138,    9,    9, 0x0a,
     210,  138,    9,    9, 0x0a,
     239,  232,    9,    9, 0x0a,
     265,  260,    9,    9, 0x0a,
     287,    9,    9,    9, 0x0a,
     302,    9,    9,    9, 0x0a,
     317,    9,    9,    9, 0x0a,
     334,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     357,  350, 0x43495103,
     373,  350, 0x43495103,
     385,  350, 0x43495103,
     395,  350, 0x43495103,
     411,  407, 0x02495103,
     425,  407, 0x02495103,
     440,  407, 0x02495103,
     454,  407, 0x02495103,
     468,  407, 0x02495103,
     489,  481, 0x0a495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_AppTheme[] = {
    "AppTheme\0\0themeChanged()\0themeSaved()\0"
    "color\0setBackgroundColor(QColor)\0"
    "setAccentColor(QColor)\0setTextColor(QColor)\0"
    "setBorderColor(QColor)\0size\0"
    "setSmallFontSize(int)\0setNormalFontSize(int)\0"
    "setLargeFontSize(int)\0setTitleFontSize(int)\0"
    "radius\0setBorderRadius(int)\0name\0"
    "setThemeName(QString)\0loadSettings()\0"
    "saveSettings()\0loadLightTheme()\0"
    "loadDarkTheme()\0QColor\0backgroundColor\0"
    "accentColor\0textColor\0borderColor\0int\0"
    "smallFontSize\0normalFontSize\0largeFontSize\0"
    "titleFontSize\0borderRadius\0QString\0"
    "themeName\0"
};

void AppTheme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppTheme *_t = static_cast<AppTheme *>(_o);
        switch (_id) {
        case 0: _t->themeChanged(); break;
        case 1: _t->themeSaved(); break;
        case 2: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setAccentColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->setTextColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->setBorderColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->setSmallFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setNormalFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setLargeFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setTitleFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setBorderRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setThemeName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->loadSettings(); break;
        case 13: _t->saveSettings(); break;
        case 14: _t->loadLightTheme(); break;
        case 15: _t->loadDarkTheme(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppTheme::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppTheme::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppTheme,
      qt_meta_data_AppTheme, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppTheme::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppTheme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppTheme::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppTheme))
        return static_cast<void*>(const_cast< AppTheme*>(this));
    return QObject::qt_metacast(_clname);
}

int AppTheme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = accentColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = textColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = borderColor(); break;
        case 4: *reinterpret_cast< int*>(_v) = smallFontSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = normalFontSize(); break;
        case 6: *reinterpret_cast< int*>(_v) = largeFontSize(); break;
        case 7: *reinterpret_cast< int*>(_v) = titleFontSize(); break;
        case 8: *reinterpret_cast< int*>(_v) = borderRadius(); break;
        case 9: *reinterpret_cast< QString*>(_v) = themeName(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setAccentColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setSmallFontSize(*reinterpret_cast< int*>(_v)); break;
        case 5: setNormalFontSize(*reinterpret_cast< int*>(_v)); break;
        case 6: setLargeFontSize(*reinterpret_cast< int*>(_v)); break;
        case 7: setTitleFontSize(*reinterpret_cast< int*>(_v)); break;
        case 8: setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 9: setThemeName(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AppTheme::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AppTheme::themeSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
