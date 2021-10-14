// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Position.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Position.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

Position::Position()
{
    // m_x com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3eb25e1a
    m_x = 0.0;
    // m_y com.eprosima.idl.parser.typecode.PrimitiveTypeCode@477b4cdf
    m_y = 0.0;
    // m_z com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77c2494c
    m_z = 0.0;

}

Position::~Position()
{



}

Position::Position(
        const Position& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
}

Position::Position(
        Position&& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
}

Position& Position::operator =(
        const Position& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;

    return *this;
}

Position& Position::operator =(
        Position&& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;

    return *this;
}

size_t Position::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t Position::getCdrSerializedSize(
        const Position& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void Position::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_x;
    scdr << m_y;
    scdr << m_z;

}

void Position::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_x;
    dcdr >> m_y;
    dcdr >> m_z;
}

/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void Position::x(
        float _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
float Position::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
float& Position::x()
{
    return m_x;
}

/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void Position::y(
        float _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
float Position::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
float& Position::y()
{
    return m_y;
}

/*!
 * @brief This function sets a value in member z
 * @param _z New value for member z
 */
void Position::z(
        float _z)
{
    m_z = _z;
}

/*!
 * @brief This function returns the value of member z
 * @return Value of member z
 */
float Position::z() const
{
    return m_z;
}

/*!
 * @brief This function returns a reference to member z
 * @return Reference to member z
 */
float& Position::z()
{
    return m_z;
}


size_t Position::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool Position::isKeyDefined()
{
    return false;
}

void Position::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}
