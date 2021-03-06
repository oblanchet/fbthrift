#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport make_unique, unique_ptr, shared_ptr

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast


@__cython.auto_pickle(False)
cdef class __MyField_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __MyField_FieldsSetter create(_module_types.cMyField* struct_cpp_obj):
        cdef __MyField_FieldsSetter __fbthrift_inst = __MyField_FieldsSetter.__new__(__MyField_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_value")] = __MyField_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"value")] = __MyField_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_value")] = __MyField_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_enum_value")] = __MyField_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"enum_value")] = __MyField_FieldsSetter._set_field_4
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_enum_value")] = __MyField_FieldsSetter._set_field_5
        return __fbthrift_inst

    cdef void set_field(__MyField_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __MyField_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field opt_value
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyField](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'opt_value is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).opt_value = make_unique[cint64_t](deref((<cint64_t?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field value
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyField](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'value is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).value = make_unique[cint64_t](deref((<cint64_t?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_value
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyField](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'req_value is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).req_value = make_unique[cint64_t](deref((<cint64_t?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field opt_enum_value
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyField](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, _module_types.MyEnum):
            raise TypeError(f'field opt_enum_value value: {repr(_fbthrift_value)} is not of the enum type { _module_types.MyEnum }.')
        deref(self._struct_cpp_obj).opt_enum_value = make_unique[_module_types.cMyEnum](deref((<_module_types.MyEnum?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field enum_value
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyField](deref(self._struct_cpp_obj), 4)
            return
        if not isinstance(_fbthrift_value, _module_types.MyEnum):
            raise TypeError(f'field enum_value value: {repr(_fbthrift_value)} is not of the enum type { _module_types.MyEnum }.')
        deref(self._struct_cpp_obj).enum_value = make_unique[_module_types.cMyEnum](deref((<_module_types.MyEnum?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_5(self, _fbthrift_value) except *:
        # for field req_enum_value
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyField](deref(self._struct_cpp_obj), 5)
            return
        if not isinstance(_fbthrift_value, _module_types.MyEnum):
            raise TypeError(f'field req_enum_value value: {repr(_fbthrift_value)} is not of the enum type { _module_types.MyEnum }.')
        deref(self._struct_cpp_obj).req_enum_value = make_unique[_module_types.cMyEnum](deref((<_module_types.MyEnum?>_fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __MyStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __MyStruct_FieldsSetter create(_module_types.cMyStruct* struct_cpp_obj):
        cdef __MyStruct_FieldsSetter __fbthrift_inst = __MyStruct_FieldsSetter.__new__(__MyStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_ref")] = __MyStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"ref")] = __MyStruct_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_ref")] = __MyStruct_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__MyStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __MyStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field opt_ref
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'opt_ref is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).opt_ref = make_unique[_module_types.cMyField](deref((<_module_types.MyField?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field ref
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'ref is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).ref = make_unique[_module_types.cMyField](deref((<_module_types.MyField?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_ref
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStruct](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'req_ref is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).req_ref = make_unique[_module_types.cMyField](deref((<_module_types.MyField?>_fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __StructWithUnion_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithUnion_FieldsSetter create(_module_types.cStructWithUnion* struct_cpp_obj):
        cdef __StructWithUnion_FieldsSetter __fbthrift_inst = __StructWithUnion_FieldsSetter.__new__(__StructWithUnion_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"u")] = __StructWithUnion_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"aDouble")] = __StructWithUnion_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"f")] = __StructWithUnion_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StructWithUnion_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithUnion_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field u
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithUnion](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.MyUnion):
            raise TypeError(f'u is not a { _module_types.MyUnion !r}.')
        deref(self._struct_cpp_obj).u = make_unique[_module_types.cMyUnion](deref((<_module_types.MyUnion?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field aDouble
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithUnion](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'aDouble is not a { float !r}.')
        deref(self._struct_cpp_obj).aDouble = make_unique[double](deref((<double?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field f
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithUnion](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'f is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).f_ref().assign(deref((<_module_types.MyField?> _fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __RecursiveStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __RecursiveStruct_FieldsSetter create(_module_types.cRecursiveStruct* struct_cpp_obj):
        cdef __RecursiveStruct_FieldsSetter __fbthrift_inst = __RecursiveStruct_FieldsSetter.__new__(__RecursiveStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"mes")] = __RecursiveStruct_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__RecursiveStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __RecursiveStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field mes
        if _fbthrift_value is None:
            __reset_field[_module_types.cRecursiveStruct](deref(self._struct_cpp_obj), 0)
            return
        deref(self._struct_cpp_obj).mes_ref().assign(deref(_module_types.List__RecursiveStruct(_fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __StructWithContainers_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithContainers_FieldsSetter create(_module_types.cStructWithContainers* struct_cpp_obj):
        cdef __StructWithContainers_FieldsSetter __fbthrift_inst = __StructWithContainers_FieldsSetter.__new__(__StructWithContainers_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"list_ref")] = __StructWithContainers_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"set_ref")] = __StructWithContainers_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"map_ref")] = __StructWithContainers_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"list_ref_unique")] = __StructWithContainers_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"set_ref_shared")] = __StructWithContainers_FieldsSetter._set_field_4
        __fbthrift_inst._setters[__cstring_view(<const char*>"list_ref_shared_const")] = __StructWithContainers_FieldsSetter._set_field_5
        return __fbthrift_inst

    cdef void set_field(__StructWithContainers_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithContainers_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field list_ref
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithContainers](deref(self._struct_cpp_obj), 0)
            return
        deref(self._struct_cpp_obj).list_ref = make_unique[vector[cint32_t]](deref(_module_types.List__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field set_ref
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithContainers](deref(self._struct_cpp_obj), 1)
            return
        deref(self._struct_cpp_obj).set_ref = make_unique[cset[cint32_t]](deref(_module_types.Set__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field map_ref
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithContainers](deref(self._struct_cpp_obj), 2)
            return
        deref(self._struct_cpp_obj).map_ref = make_unique[cmap[cint32_t,cint32_t]](deref(_module_types.Map__i32_i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field list_ref_unique
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithContainers](deref(self._struct_cpp_obj), 3)
            return
        deref(self._struct_cpp_obj).list_ref_unique = make_unique[vector[cint32_t]](deref(_module_types.List__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field set_ref_shared
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithContainers](deref(self._struct_cpp_obj), 4)
            return
        deref(self._struct_cpp_obj).set_ref_shared = _module_types.Set__i32(_fbthrift_value)._cpp_obj

    cdef void _set_field_5(self, _fbthrift_value) except *:
        # for field list_ref_shared_const
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithContainers](deref(self._struct_cpp_obj), 5)
            return
        deref(self._struct_cpp_obj).list_ref_shared_const = const_pointer_cast(_module_types.List__i32(_fbthrift_value)._cpp_obj)


@__cython.auto_pickle(False)
cdef class __StructWithSharedConst_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithSharedConst_FieldsSetter create(_module_types.cStructWithSharedConst* struct_cpp_obj):
        cdef __StructWithSharedConst_FieldsSetter __fbthrift_inst = __StructWithSharedConst_FieldsSetter.__new__(__StructWithSharedConst_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_shared_const")] = __StructWithSharedConst_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"shared_const")] = __StructWithSharedConst_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_shared_const")] = __StructWithSharedConst_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StructWithSharedConst_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithSharedConst_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field opt_shared_const
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithSharedConst](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'opt_shared_const is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).opt_shared_const = const_pointer_cast((<_module_types.MyField?>_fbthrift_value)._cpp_obj)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field shared_const
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithSharedConst](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'shared_const is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).shared_const = const_pointer_cast((<_module_types.MyField?>_fbthrift_value)._cpp_obj)

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_shared_const
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithSharedConst](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.MyField):
            raise TypeError(f'req_shared_const is not a { _module_types.MyField !r}.')
        deref(self._struct_cpp_obj).req_shared_const = const_pointer_cast((<_module_types.MyField?>_fbthrift_value)._cpp_obj)


@__cython.auto_pickle(False)
cdef class __Empty_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Empty_FieldsSetter create(_module_types.cEmpty* struct_cpp_obj):
        cdef __Empty_FieldsSetter __fbthrift_inst = __Empty_FieldsSetter.__new__(__Empty_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        return __fbthrift_inst

    cdef void set_field(__Empty_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Empty_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)


@__cython.auto_pickle(False)
cdef class __StructWithRef_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithRef_FieldsSetter create(_module_types.cStructWithRef* struct_cpp_obj):
        cdef __StructWithRef_FieldsSetter __fbthrift_inst = __StructWithRef_FieldsSetter.__new__(__StructWithRef_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"def_field")] = __StructWithRef_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_field")] = __StructWithRef_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_field")] = __StructWithRef_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StructWithRef_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithRef_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field def_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRef](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'def_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).def_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field opt_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRef](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'opt_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).opt_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRef](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'req_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).req_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __StructWithRefTypeUnique_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithRefTypeUnique_FieldsSetter create(_module_types.cStructWithRefTypeUnique* struct_cpp_obj):
        cdef __StructWithRefTypeUnique_FieldsSetter __fbthrift_inst = __StructWithRefTypeUnique_FieldsSetter.__new__(__StructWithRefTypeUnique_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"def_field")] = __StructWithRefTypeUnique_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_field")] = __StructWithRefTypeUnique_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_field")] = __StructWithRefTypeUnique_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StructWithRefTypeUnique_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithRefTypeUnique_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field def_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeUnique](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'def_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).def_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field opt_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeUnique](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'opt_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).opt_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeUnique](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'req_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).req_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __StructWithRefTypeShared_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithRefTypeShared_FieldsSetter create(_module_types.cStructWithRefTypeShared* struct_cpp_obj):
        cdef __StructWithRefTypeShared_FieldsSetter __fbthrift_inst = __StructWithRefTypeShared_FieldsSetter.__new__(__StructWithRefTypeShared_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"def_field")] = __StructWithRefTypeShared_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_field")] = __StructWithRefTypeShared_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_field")] = __StructWithRefTypeShared_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StructWithRefTypeShared_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithRefTypeShared_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field def_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeShared](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'def_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).def_field = (<_module_types.Empty?>_fbthrift_value)._cpp_obj

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field opt_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeShared](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'opt_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).opt_field = (<_module_types.Empty?>_fbthrift_value)._cpp_obj

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeShared](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'req_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).req_field = (<_module_types.Empty?>_fbthrift_value)._cpp_obj


@__cython.auto_pickle(False)
cdef class __StructWithRefTypeSharedConst_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithRefTypeSharedConst_FieldsSetter create(_module_types.cStructWithRefTypeSharedConst* struct_cpp_obj):
        cdef __StructWithRefTypeSharedConst_FieldsSetter __fbthrift_inst = __StructWithRefTypeSharedConst_FieldsSetter.__new__(__StructWithRefTypeSharedConst_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"def_field")] = __StructWithRefTypeSharedConst_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_field")] = __StructWithRefTypeSharedConst_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"req_field")] = __StructWithRefTypeSharedConst_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StructWithRefTypeSharedConst_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithRefTypeSharedConst_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field def_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeSharedConst](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'def_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).def_field = const_pointer_cast((<_module_types.Empty?>_fbthrift_value)._cpp_obj)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field opt_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeSharedConst](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'opt_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).opt_field = const_pointer_cast((<_module_types.Empty?>_fbthrift_value)._cpp_obj)

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field req_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefTypeSharedConst](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'req_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).req_field = const_pointer_cast((<_module_types.Empty?>_fbthrift_value)._cpp_obj)


@__cython.auto_pickle(False)
cdef class __StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter create(_module_types.cStructWithRefAndAnnotCppNoexceptMoveCtor* struct_cpp_obj):
        cdef __StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter __fbthrift_inst = __StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter.__new__(__StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"def_field")] = __StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field def_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithRefAndAnnotCppNoexceptMoveCtor](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Empty):
            raise TypeError(f'def_field is not a { _module_types.Empty !r}.')
        deref(self._struct_cpp_obj).def_field = make_unique[_module_types.cEmpty](deref((<_module_types.Empty?>_fbthrift_value)._cpp_obj))

