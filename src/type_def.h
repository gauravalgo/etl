///\file

/******************************************************************************
The MIT License(MIT)

Embedded Template Library.
https://github.com/ETLCPP/etl
http://www.etlcpp.com

Copyright(c) 2016 jwellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#ifndef __ETL_TYPE_DEF__
#define __ETL_TYPE_DEF__

namespace etl
{
    //*************************************************************************
    /// A template type to define strong typedefs.
    /// Usage:
    ///\code
    /// class __MyType__;
    /// typedef etl::type_def<__MyType__, int> MyType_t;
    /// MyType_t value;
    ///\endcode
    //*************************************************************************
    template <typename TIdType, typename TValue>
    class type_def
    {
    public:

        typedef TValue  value_type;
        typedef TIdType id_type;

        //*********************************************************************
        type_def()
            : value(TValue())
        {
        }

        //*********************************************************************
        explicit type_def(TValue value)
            : value(value)
        {
        }

        //*********************************************************************
        type_def(const type_def& other)
            : value(other.value)
        {
        }

        //*********************************************************************
        operator TValue() const
        {
            return value;
        }

        //*********************************************************************
        type_def& operator ++()
        {
            ++value;
            return *this;
        }

        //*********************************************************************
        type_def operator ++(int)
        {
            type_def temp(*this);
            type_def::operator ++();
            return temp;
        }

        //*********************************************************************
        type_def& operator --()
        {
            --value;
            return *this;
        }

        //*********************************************************************
        type_def operator --(int)
        {
            type_def temp(*this);
            type_def::operator --();
            return temp;
        }

        //*********************************************************************
        type_def& operator +=(TValue rhs)
        {
            value += rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator +=(const type_def& rhs)
        {
            value += rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator -=(TValue rhs)
        {
            value -= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator -=(const type_def& rhs)
        {
            value -= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator *=(TValue rhs)
        {
            value *= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator *=(const type_def& rhs)
        {
            value *= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator /=(TValue rhs)
        {
            value /= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator /=(const type_def& rhs)
        {
            value /= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator %=(TValue rhs)
        {
            value %= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator %=(const type_def& rhs)
        {
            value %= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator &=(TValue rhs)
        {
            value &= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator &=(const type_def& rhs)
        {
            value &= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator |=(TValue rhs)
        {
            value |= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator |=(const type_def& rhs)
        {
            value |= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator ^=(TValue rhs)
        {
            value ^= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator ^=(const type_def& rhs)
        {
            value ^= rhs.value;
            return *this;
        }

        //*********************************************************************
        type_def& operator <<=(TValue rhs)
        {
            value <<= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator >>=(TValue rhs)
        {
            value >>= rhs;
            return *this;
        }

        //*********************************************************************
        type_def& operator =(const type_def& rhs)
        {
            value = rhs.value;
            return *this;
        }

        //*********************************************************************
        TValue get() const
        {
            return value;
        }

        //*********************************************************************
        friend bool operator <(const type_def& lhs, const type_def& rhs)
        {
            return lhs.value < rhs.value;
        }

        //*********************************************************************
        friend bool operator <=(const type_def& lhs, const type_def& rhs)
        {
            return lhs.value <= rhs.value;
        }

        //*********************************************************************
        friend bool operator >(const type_def& lhs, const type_def& rhs)
        {
            return lhs.value > rhs.value;
        }

        //*********************************************************************
        friend bool operator >=(const type_def& lhs, const type_def& rhs)
        {
            return lhs.value >= rhs.value;
        }

        //*********************************************************************
        friend bool operator ==(const type_def& lhs, const type_def& rhs)
        {
            return lhs.value == rhs.value;
        }

        //*********************************************************************
        friend bool operator !=(const type_def& lhs, const type_def& rhs)
        {
            return lhs.value != rhs.value;
        }

    private:

        TValue value;
    };
}

#endif