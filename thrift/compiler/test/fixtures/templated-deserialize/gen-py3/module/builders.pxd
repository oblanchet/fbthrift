#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder


cimport module.types as _module_types

cdef class SmallStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool small_A
    cdef public pint small_B


cdef class containerStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool fieldA
    cdef public dict fieldB
    cdef public set fieldC
    cdef public str fieldD
    cdef public str fieldE
    cdef public list fieldF
    cdef public dict fieldG
    cdef public list fieldH
    cdef public pbool fieldI
    cdef public dict fieldJ
    cdef public list fieldK
    cdef public set fieldL
    cdef public dict fieldM
    cdef public list fieldN
    cdef public list fieldO
    cdef public list fieldP
    cdef public _module_types.MyEnumA fieldQ
    cdef public dict fieldR
    cdef public object fieldS
    cdef public object fieldT
    cdef public object fieldU
    cdef public object fieldX


