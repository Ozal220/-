/****************************************************************************
** Meta object code from reading C++ file 'managerlogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../managerlogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managerlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_managerLogin_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_managerLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_managerLogin_t qt_meta_stringdata_managerLogin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "managerLogin"
QT_MOC_LITERAL(1, 13, 14), // "sendShowSignal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "sendCloseSignal"
QT_MOC_LITERAL(4, 45, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(5, 69, 17), // "enableLoginButton"
QT_MOC_LITERAL(6, 87, 22) // "on_loginButton_clicked"

    },
    "managerLogin\0sendShowSignal\0\0"
    "sendCloseSignal\0on_returnButton_clicked\0"
    "enableLoginButton\0on_loginButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_managerLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void managerLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        managerLogin *_t = static_cast<managerLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendShowSignal(); break;
        case 1: _t->sendCloseSignal(); break;
        case 2: _t->on_returnButton_clicked(); break;
        case 3: _t->enableLoginButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_loginButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (managerLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&managerLogin::sendShowSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (managerLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&managerLogin::sendCloseSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject managerLogin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_managerLogin.data,
      qt_meta_data_managerLogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *managerLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *managerLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_managerLogin.stringdata0))
        return static_cast<void*>(const_cast< managerLogin*>(this));
    return QDialog::qt_metacast(_clname);
}

int managerLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void managerLogin::sendShowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void managerLogin::sendCloseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE