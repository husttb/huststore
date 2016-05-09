/**
******************************************************************************
* NOTE : Generated by jsoncgen. It is NOT supposed to modify this file.
*****************************************************************************/
#include "cjson_serialization.h"

json_bool_t cjson_set_integerarray(const IntegerArray * src, IntegerArray * des)
{
    if(!src || !src->arr || !des)
    {
        return false;
    }
    des->size = src->size;
    if (des->size < 1)
    {
        des->arr = NULL;
        return true;
    }
    des->arr = json_malloc(sizeof(json_int_t) * des->size);
    memset(des->arr, 0, sizeof(json_int_t) * des->size);
    size_t index;
    for (index = 0; index < des->size; ++index)
    {
        if (!cjson_set_integer(src->arr + index, des->arr + index))
        {
            cjson_dispose_integerarray(des);
            return false;
        }
    }
    return true;
}

json_bool_t cjson_eq_integerarray(const IntegerArray * src, IntegerArray * des)
{
    if(!src || !src->arr || !des || !des->arr || (src->size != des->size))
    {
        return false;
    }
    size_t index;
    for (index = 0; index < src->size; ++index)
    {
        if (!cjson_eq_integer(src->arr + index, des->arr + index))
        {
            return false;
        }
    }
    return true;
}

void cjson_dispose_integerarray(IntegerArray * obj_val)
{
    if (!obj_val || !obj_val->arr)
    {
        return;
    }
    size_t index;
    for (index = 0; index < obj_val->size; ++index)
    {
        cjson_dispose_integer(&obj_val->arr[index]);
    }
    json_free(obj_val->arr);
    obj_val->arr = NULL;
    obj_val->size = 0;
}

json_t * cjson_serialize_integerarray(const IntegerArray * obj_val)
{
    if (!obj_val || !obj_val->arr)
    {
        return NULL;
    }
    json_t * json_val = json_array();
    size_t index = 0;
    for (index = 0; index < obj_val->size; ++index)
    {
        json_t * item = cjson_serialize_integer(&obj_val->arr[index]);
        if (!item)
        {
            cjson_dispose_json_value(json_val);
            return NULL;
        }
        if (!json_array_append_item(json_val, item))
        {
            cjson_dispose_json_value(item);
            return NULL;
        }
    }
    return json_val;
}

json_bool_t cjson_deserialize_integerarray(const json_t * json_val, IntegerArray * obj_val)
{
    if (!json_is_array(json_val) || !obj_val)
    {
        return false;
    }
    obj_val->size = json_array_size(json_val);
    if (obj_val->size < 1)
    {
        obj_val->arr = NULL;
        return true;
    }
    obj_val->arr = json_malloc(sizeof(json_int_t) * obj_val->size);
    memset(obj_val->arr, 0, sizeof(json_int_t) * obj_val->size);
    size_t index;
    for (index = 0; index < obj_val->size; ++index)
    {
        json_t * tmp_json_val = json_array_get_item(json_val, index);
        if (!cjson_deserialize_integer(tmp_json_val, &obj_val->arr[index]))
        {
            cjson_dispose_integerarray(obj_val);
            return false;
        }
    }
    return true;
}

char * cjson_dump_integerarray(const IntegerArray * obj_val)
{
    json_t * json_val = cjson_serialize_integerarray(obj_val);
    if (!obj_val)
    {
        return NULL;
    }
    char * result = json_dump_to_str(json_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_load_integerarray(const char * input, IntegerArray * obj_val)
{
    json_t * json_val = json_load_from_str(input);
    if (!json_val)
    {
        return false;
    }
    json_bool_t result = cjson_deserialize_integerarray(json_val, obj_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_save_integerarray_to_file(const IntegerArray * obj_val, const char * path)
{
    json_t * json_val = cjson_serialize_integerarray(obj_val);
    if (!obj_val)
    {
        return false;
    }
    json_bool_t result = json_dump_to_file(json_val, path);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_load_integerarray_from_file(const char * path, IntegerArray * obj_val)
{
    json_t * json_val = json_load_from_file(path);
    if (!json_val)
    {
        return false;
    }
    json_bool_t result = cjson_deserialize_integerarray(json_val, obj_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_set_stringarray(const StringArray * src, StringArray * des)
{
    if(!src || !src->arr || !des)
    {
        return false;
    }
    des->size = src->size;
    if (des->size < 1)
    {
        des->arr = NULL;
        return true;
    }
    des->arr = json_malloc(sizeof(json_str_t) * des->size);
    memset(des->arr, 0, sizeof(json_str_t) * des->size);
    size_t index;
    for (index = 0; index < des->size; ++index)
    {
        if (!cjson_set_string(src->arr + index, des->arr + index))
        {
            cjson_dispose_stringarray(des);
            return false;
        }
    }
    return true;
}

json_bool_t cjson_eq_stringarray(const StringArray * src, StringArray * des)
{
    if(!src || !src->arr || !des || !des->arr || (src->size != des->size))
    {
        return false;
    }
    size_t index;
    for (index = 0; index < src->size; ++index)
    {
        if (!cjson_eq_string(src->arr + index, des->arr + index))
        {
            return false;
        }
    }
    return true;
}

void cjson_dispose_stringarray(StringArray * obj_val)
{
    if (!obj_val || !obj_val->arr)
    {
        return;
    }
    size_t index;
    for (index = 0; index < obj_val->size; ++index)
    {
        cjson_dispose_string(&obj_val->arr[index]);
    }
    json_free(obj_val->arr);
    obj_val->arr = NULL;
    obj_val->size = 0;
}

json_t * cjson_serialize_stringarray(const StringArray * obj_val)
{
    if (!obj_val || !obj_val->arr)
    {
        return NULL;
    }
    json_t * json_val = json_array();
    size_t index = 0;
    for (index = 0; index < obj_val->size; ++index)
    {
        json_t * item = cjson_serialize_string(&obj_val->arr[index]);
        if (!item)
        {
            cjson_dispose_json_value(json_val);
            return NULL;
        }
        if (!json_array_append_item(json_val, item))
        {
            cjson_dispose_json_value(item);
            return NULL;
        }
    }
    return json_val;
}

json_bool_t cjson_deserialize_stringarray(const json_t * json_val, StringArray * obj_val)
{
    if (!json_is_array(json_val) || !obj_val)
    {
        return false;
    }
    obj_val->size = json_array_size(json_val);
    if (obj_val->size < 1)
    {
        obj_val->arr = NULL;
        return true;
    }
    obj_val->arr = json_malloc(sizeof(json_str_t) * obj_val->size);
    memset(obj_val->arr, 0, sizeof(json_str_t) * obj_val->size);
    size_t index;
    for (index = 0; index < obj_val->size; ++index)
    {
        json_t * tmp_json_val = json_array_get_item(json_val, index);
        if (!cjson_deserialize_string(tmp_json_val, &obj_val->arr[index]))
        {
            cjson_dispose_stringarray(obj_val);
            return false;
        }
    }
    return true;
}

char * cjson_dump_stringarray(const StringArray * obj_val)
{
    json_t * json_val = cjson_serialize_stringarray(obj_val);
    if (!obj_val)
    {
        return NULL;
    }
    char * result = json_dump_to_str(json_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_load_stringarray(const char * input, StringArray * obj_val)
{
    json_t * json_val = json_load_from_str(input);
    if (!json_val)
    {
        return false;
    }
    json_bool_t result = cjson_deserialize_stringarray(json_val, obj_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_save_stringarray_to_file(const StringArray * obj_val, const char * path)
{
    json_t * json_val = cjson_serialize_stringarray(obj_val);
    if (!obj_val)
    {
        return false;
    }
    json_bool_t result = json_dump_to_file(json_val, path);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_load_stringarray_from_file(const char * path, StringArray * obj_val)
{
    json_t * json_val = json_load_from_file(path);
    if (!json_val)
    {
        return false;
    }
    json_bool_t result = cjson_deserialize_stringarray(json_val, obj_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_set_doublearray(const DoubleArray * src, DoubleArray * des)
{
    if(!src || !src->arr || !des)
    {
        return false;
    }
    des->size = src->size;
    if (des->size < 1)
    {
        des->arr = NULL;
        return true;
    }
    des->arr = json_malloc(sizeof(double) * des->size);
    memset(des->arr, 0, sizeof(double) * des->size);
    size_t index;
    for (index = 0; index < des->size; ++index)
    {
        if (!cjson_set_double(src->arr + index, des->arr + index))
        {
            cjson_dispose_doublearray(des);
            return false;
        }
    }
    return true;
}

json_bool_t cjson_eq_doublearray(const DoubleArray * src, DoubleArray * des)
{
    if(!src || !src->arr || !des || !des->arr || (src->size != des->size))
    {
        return false;
    }
    size_t index;
    for (index = 0; index < src->size; ++index)
    {
        if (!cjson_eq_double(src->arr + index, des->arr + index))
        {
            return false;
        }
    }
    return true;
}

void cjson_dispose_doublearray(DoubleArray * obj_val)
{
    if (!obj_val || !obj_val->arr)
    {
        return;
    }
    size_t index;
    for (index = 0; index < obj_val->size; ++index)
    {
        cjson_dispose_double(&obj_val->arr[index]);
    }
    json_free(obj_val->arr);
    obj_val->arr = NULL;
    obj_val->size = 0;
}

json_t * cjson_serialize_doublearray(const DoubleArray * obj_val)
{
    if (!obj_val || !obj_val->arr)
    {
        return NULL;
    }
    json_t * json_val = json_array();
    size_t index = 0;
    for (index = 0; index < obj_val->size; ++index)
    {
        json_t * item = cjson_serialize_double(&obj_val->arr[index]);
        if (!item)
        {
            cjson_dispose_json_value(json_val);
            return NULL;
        }
        if (!json_array_append_item(json_val, item))
        {
            cjson_dispose_json_value(item);
            return NULL;
        }
    }
    return json_val;
}

json_bool_t cjson_deserialize_doublearray(const json_t * json_val, DoubleArray * obj_val)
{
    if (!json_is_array(json_val) || !obj_val)
    {
        return false;
    }
    obj_val->size = json_array_size(json_val);
    if (obj_val->size < 1)
    {
        obj_val->arr = NULL;
        return true;
    }
    obj_val->arr = json_malloc(sizeof(double) * obj_val->size);
    memset(obj_val->arr, 0, sizeof(double) * obj_val->size);
    size_t index;
    for (index = 0; index < obj_val->size; ++index)
    {
        json_t * tmp_json_val = json_array_get_item(json_val, index);
        if (!cjson_deserialize_double(tmp_json_val, &obj_val->arr[index]))
        {
            cjson_dispose_doublearray(obj_val);
            return false;
        }
    }
    return true;
}

char * cjson_dump_doublearray(const DoubleArray * obj_val)
{
    json_t * json_val = cjson_serialize_doublearray(obj_val);
    if (!obj_val)
    {
        return NULL;
    }
    char * result = json_dump_to_str(json_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_load_doublearray(const char * input, DoubleArray * obj_val)
{
    json_t * json_val = json_load_from_str(input);
    if (!json_val)
    {
        return false;
    }
    json_bool_t result = cjson_deserialize_doublearray(json_val, obj_val);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_save_doublearray_to_file(const DoubleArray * obj_val, const char * path)
{
    json_t * json_val = cjson_serialize_doublearray(obj_val);
    if (!obj_val)
    {
        return false;
    }
    json_bool_t result = json_dump_to_file(json_val, path);
    cjson_dispose_json_value(json_val);
    return result;
}

json_bool_t cjson_load_doublearray_from_file(const char * path, DoubleArray * obj_val)
{
    json_t * json_val = json_load_from_file(path);
    if (!json_val)
    {
        return false;
    }
    json_bool_t result = cjson_deserialize_doublearray(json_val, obj_val);
    cjson_dispose_json_value(json_val);
    return result;
}