/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct MyIntField;
struct MyStringField;
struct MyDataField;
struct myEnum;
struct oneway;
struct readonly;
struct idempotent;
struct myEnum;
struct myStruct;
struct myDataItem;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_MyIntField
#define APACHE_THRIFT_ACCESSOR_MyIntField
APACHE_THRIFT_DEFINE_ACCESSOR(MyIntField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyStringField
#define APACHE_THRIFT_ACCESSOR_MyStringField
APACHE_THRIFT_DEFINE_ACCESSOR(MyStringField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyDataField
#define APACHE_THRIFT_ACCESSOR_MyDataField
APACHE_THRIFT_DEFINE_ACCESSOR(MyDataField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_oneway
#define APACHE_THRIFT_ACCESSOR_oneway
APACHE_THRIFT_DEFINE_ACCESSOR(oneway);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_readonly
#define APACHE_THRIFT_ACCESSOR_readonly
APACHE_THRIFT_DEFINE_ACCESSOR(readonly);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_idempotent
#define APACHE_THRIFT_ACCESSOR_idempotent
APACHE_THRIFT_DEFINE_ACCESSOR(idempotent);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myStruct
#define APACHE_THRIFT_ACCESSOR_myStruct
APACHE_THRIFT_DEFINE_ACCESSOR(myStruct);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myDataItem
#define APACHE_THRIFT_ACCESSOR_myDataItem
APACHE_THRIFT_DEFINE_ACCESSOR(myDataItem);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::MyEnum> :
  ::apache::thrift::detail::enum_hash<::cpp2::MyEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::MyEnum>;

template <> struct TEnumTraits<::cpp2::MyEnum> {
  using type = ::cpp2::MyEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::MyValue2; }
};


}} // apache::thrift

namespace cpp2 {

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class MyDataItem;
class MyStruct;
class MyUnion;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyDataItem final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyDataItem;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyDataItem() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyDataItem(apache::thrift::FragileConstructor);

  MyDataItem(MyDataItem&&) = default;

  MyDataItem(const MyDataItem&) = default;


  MyDataItem& operator=(MyDataItem&&) = default;

  MyDataItem& operator=(const MyDataItem&) = default;
  void __clear();
  bool operator==(const MyDataItem& rhs) const;
  bool operator<(const MyDataItem& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyDataItem >;
  friend void swap(MyDataItem& a, MyDataItem& b);
};

template <class Protocol_>
uint32_t MyDataItem::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStruct();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::std::string MyStringField__arg, ::cpp2::MyDataItem MyDataField__arg, ::cpp2::MyEnum myEnum__arg, bool oneway__arg, bool readonly__arg, bool idempotent__arg);

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;


  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();

  ~MyStruct();

 private:
  ::std::int64_t MyIntField;
 private:
  ::std::string MyStringField;
 private:
  ::cpp2::MyDataItem MyDataField;
 private:
  ::cpp2::MyEnum myEnum;
 private:
  bool oneway;
 private:
  bool readonly;
 private:
  bool idempotent;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool MyIntField;
    bool MyStringField;
    bool MyDataField;
    bool myEnum;
    bool oneway;
    bool readonly;
    bool idempotent;
  } __isset = {};
  bool operator==(const MyStruct& rhs) const;
  bool operator<(const MyStruct& rhs) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyIntField_ref() const& {
    return {this->MyIntField, __isset.MyIntField};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyIntField_ref() const&& {
    return {std::move(this->MyIntField), __isset.MyIntField};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyIntField_ref() & {
    return {this->MyIntField, __isset.MyIntField};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyIntField_ref() && {
    return {std::move(this->MyIntField), __isset.MyIntField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyStringField_ref() const& {
    return {this->MyStringField, __isset.MyStringField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyStringField_ref() const&& {
    return {std::move(this->MyStringField), __isset.MyStringField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyStringField_ref() & {
    return {this->MyStringField, __isset.MyStringField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyStringField_ref() && {
    return {std::move(this->MyStringField), __isset.MyStringField};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyDataField_ref() const& {
    return {this->MyDataField, __isset.MyDataField};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyDataField_ref() const&& {
    return {std::move(this->MyDataField), __isset.MyDataField};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyDataField_ref() & {
    return {this->MyDataField, __isset.MyDataField};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyDataField_ref() && {
    return {std::move(this->MyDataField), __isset.MyDataField};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myEnum_ref() const& {
    return {this->myEnum, __isset.myEnum};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myEnum_ref() const&& {
    return {std::move(this->myEnum), __isset.myEnum};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myEnum_ref() & {
    return {this->myEnum, __isset.myEnum};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myEnum_ref() && {
    return {std::move(this->myEnum), __isset.myEnum};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> oneway_ref() const& {
    return {this->oneway, __isset.oneway};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> oneway_ref() const&& {
    return {std::move(this->oneway), __isset.oneway};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> oneway_ref() & {
    return {this->oneway, __isset.oneway};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> oneway_ref() && {
    return {std::move(this->oneway), __isset.oneway};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> readonly_ref() const& {
    return {this->readonly, __isset.readonly};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> readonly_ref() const&& {
    return {std::move(this->readonly), __isset.readonly};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> readonly_ref() & {
    return {this->readonly, __isset.readonly};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> readonly_ref() && {
    return {std::move(this->readonly), __isset.readonly};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> idempotent_ref() const& {
    return {this->idempotent, __isset.idempotent};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> idempotent_ref() const&& {
    return {std::move(this->idempotent), __isset.idempotent};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> idempotent_ref() & {
    return {this->idempotent, __isset.idempotent};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> idempotent_ref() && {
    return {std::move(this->idempotent), __isset.idempotent};
  }

  ::std::int64_t get_MyIntField() const {
    return MyIntField;
  }

  ::std::int64_t& set_MyIntField(::std::int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }

  const ::std::string& get_MyStringField() const& {
    return MyStringField;
  }

  ::std::string get_MyStringField() && {
    return std::move(MyStringField);
  }

  template <typename T_MyStruct_MyStringField_struct_setter = ::std::string>
  ::std::string& set_MyStringField(T_MyStruct_MyStringField_struct_setter&& MyStringField_) {
    MyStringField = std::forward<T_MyStruct_MyStringField_struct_setter>(MyStringField_);
    __isset.MyStringField = true;
    return MyStringField;
  }
  const ::cpp2::MyDataItem& get_MyDataField() const&;
  ::cpp2::MyDataItem get_MyDataField() &&;

  template <typename T_MyStruct_MyDataField_struct_setter = ::cpp2::MyDataItem>
  ::cpp2::MyDataItem& set_MyDataField(T_MyStruct_MyDataField_struct_setter&& MyDataField_) {
    MyDataField = std::forward<T_MyStruct_MyDataField_struct_setter>(MyDataField_);
    __isset.MyDataField = true;
    return MyDataField;
  }

  ::cpp2::MyEnum get_myEnum() const {
    return myEnum;
  }

  ::cpp2::MyEnum& set_myEnum(::cpp2::MyEnum myEnum_) {
    myEnum = myEnum_;
    __isset.myEnum = true;
    return myEnum;
  }

  bool get_oneway() const {
    return oneway;
  }

  bool& set_oneway(bool oneway_) {
    oneway = oneway_;
    __isset.oneway = true;
    return oneway;
  }

  bool get_readonly() const {
    return readonly;
  }

  bool& set_readonly(bool readonly_) {
    readonly = readonly_;
    __isset.readonly = true;
    return readonly;
  }

  bool get_idempotent() const {
    return idempotent;
  }

  bool& set_idempotent(bool idempotent_) {
    idempotent = idempotent_;
    __isset.idempotent = true;
    return idempotent;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyStruct >;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyUnion final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyUnion;
  static constexpr bool __fbthrift_cpp2_is_union =
    true;


 public:
  enum Type : int {
    __EMPTY__ = 0,
    myEnum = 1,
    myStruct = 2,
    myDataItem = 3,
  } ;

  MyUnion()
      : type_(Type::__EMPTY__) {}

  MyUnion(MyUnion&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(std::move(rhs.value_.myStruct));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  MyUnion(const MyUnion& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(rhs.value_.myEnum);
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(rhs.value_.myStruct);
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(rhs.value_.myDataItem);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  MyUnion& operator=(MyUnion&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(std::move(rhs.value_.myStruct));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  MyUnion& operator=(const MyUnion& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(rhs.value_.myEnum);
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(rhs.value_.myStruct);
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(rhs.value_.myDataItem);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  ~MyUnion() {
    __clear();
  }
  union storage_type {
    ::cpp2::MyEnum myEnum;
    ::cpp2::MyStruct myStruct;
    ::cpp2::MyDataItem myDataItem;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const MyUnion& rhs) const;
  bool operator<(const MyUnion& rhs) const;

  ::cpp2::MyEnum& set_myEnum(::cpp2::MyEnum t = ::cpp2::MyEnum()) {
    __clear();
    type_ = Type::myEnum;
    ::new (std::addressof(value_.myEnum)) ::cpp2::MyEnum(t);
    return value_.myEnum;
  }

  ::cpp2::MyStruct& set_myStruct(::cpp2::MyStruct const &t) {
    __clear();
    type_ = Type::myStruct;
    ::new (std::addressof(value_.myStruct)) ::cpp2::MyStruct(t);
    return value_.myStruct;
  }

  ::cpp2::MyStruct& set_myStruct(::cpp2::MyStruct&& t) {
    __clear();
    type_ = Type::myStruct;
    ::new (std::addressof(value_.myStruct)) ::cpp2::MyStruct(std::move(t));
    return value_.myStruct;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::cpp2::MyStruct, T...>> ::cpp2::MyStruct& set_myStruct(T&&... t) {
    __clear();
    type_ = Type::myStruct;
    ::new (std::addressof(value_.myStruct)) ::cpp2::MyStruct(std::forward<T>(t)...);
    return value_.myStruct;
  }

  ::cpp2::MyDataItem& set_myDataItem(::cpp2::MyDataItem const &t) {
    __clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem)) ::cpp2::MyDataItem(t);
    return value_.myDataItem;
  }

  ::cpp2::MyDataItem& set_myDataItem(::cpp2::MyDataItem&& t) {
    __clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem)) ::cpp2::MyDataItem(std::move(t));
    return value_.myDataItem;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::cpp2::MyDataItem, T...>> ::cpp2::MyDataItem& set_myDataItem(T&&... t) {
    __clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem)) ::cpp2::MyDataItem(std::forward<T>(t)...);
    return value_.myDataItem;
  }

  ::cpp2::MyEnum const & get_myEnum() const {
    assert(type_ == Type::myEnum);
    return value_.myEnum;
  }

  ::cpp2::MyStruct const & get_myStruct() const {
    assert(type_ == Type::myStruct);
    return value_.myStruct;
  }

  ::cpp2::MyDataItem const & get_myDataItem() const {
    assert(type_ == Type::myDataItem);
    return value_.myDataItem;
  }

  ::cpp2::MyEnum & mutable_myEnum() {
    assert(type_ == Type::myEnum);
    return value_.myEnum;
  }

  ::cpp2::MyStruct & mutable_myStruct() {
    assert(type_ == Type::myStruct);
    return value_.myStruct;
  }

  ::cpp2::MyDataItem & mutable_myDataItem() {
    assert(type_ == Type::myDataItem);
    return value_.myDataItem;
  }

  ::cpp2::MyEnum move_myEnum() {
    assert(type_ == Type::myEnum);
    return std::move(value_.myEnum);
  }

  ::cpp2::MyStruct move_myStruct() {
    assert(type_ == Type::myStruct);
    return std::move(value_.myStruct);
  }

  ::cpp2::MyDataItem move_myDataItem() {
    assert(type_ == Type::myDataItem);
    return std::move(value_.myDataItem);
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myEnum_ref() const& {
    return {value_.myEnum, type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myEnum_ref() const&& {
    return {std::move(value_.myEnum), type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myEnum_ref() & {
    return {value_.myEnum, type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myEnum_ref() && {
    return {std::move(value_.myEnum), type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myStruct_ref() const& {
    return {value_.myStruct, type_, myStruct, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myStruct_ref() const&& {
    return {std::move(value_.myStruct), type_, myStruct, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myStruct_ref() & {
    return {value_.myStruct, type_, myStruct, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myStruct_ref() && {
    return {std::move(value_.myStruct), type_, myStruct, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myDataItem_ref() const& {
    return {value_.myDataItem, type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myDataItem_ref() const&& {
    return {std::move(value_.myDataItem), type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myDataItem_ref() & {
    return {value_.myDataItem, type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myDataItem_ref() && {
    return {std::move(value_.myDataItem), type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  Type getType() const { return static_cast<Type>(type_); }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  storage_type value_;
  std::underlying_type_t<Type> type_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyUnion >;
  friend void swap(MyUnion& a, MyUnion& b);
};

template <class Protocol_>
uint32_t MyUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::MyUnion::Type>;

template <> struct TEnumTraits<::cpp2::MyUnion::Type> {
  using type = ::cpp2::MyUnion::Type;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

};
}} // apache::thrift
