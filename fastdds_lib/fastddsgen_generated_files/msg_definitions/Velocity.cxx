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
 * @file Velocity.cpp
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

#include "Velocity.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::Velocity::Velocity()
{
    // m_x com.eprosima.idl.parser.typecode.PrimitiveTypeCode@19bb07ed
    m_x = 0.0;
    // m_y com.eprosima.idl.parser.typecode.PrimitiveTypeCode@10e41621
    m_y = 0.0;
    // m_z com.eprosima.idl.parser.typecode.PrimitiveTypeCode@353d0772
    m_z = 0.0;

}

idl_msg::Velocity::~Velocity()
{



}

idl_msg::Velocity::Velocity(
        const Velocity& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
}

idl_msg::Velocity::Velocity(
        Velocity&& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
}

idl_msg::Velocity& idl_msg::Velocity::operator =(
        const Velocity& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;

    return *this;
}

idl_msg::Velocity& idl_msg::Velocity::operator =(
        Velocity&& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;

    return *this;
}

size_t idl_msg::Velocity::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t idl_msg::Velocity::getCdrSerializedSize(
        const idl_msg::Velocity& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void idl_msg::Velocity::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_x;
    scdr << m_y;
    scdr << m_z;

}

void idl_msg::Velocity::deserialize(
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
void idl_msg::Velocity::x(
        float _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
float idl_msg::Velocity::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
float& idl_msg::Velocity::x()
{
    return m_x;
}

/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void idl_msg::Velocity::y(
        float _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
float idl_msg::Velocity::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
float& idl_msg::Velocity::y()
{
    return m_y;
}

/*!
 * @brief This function sets a value in member z
 * @param _z New value for member z
 */
void idl_msg::Velocity::z(
        float _z)
{
    m_z = _z;
}

/*!
 * @brief This function returns the value of member z
 * @return Value of member z
 */
float idl_msg::Velocity::z() const
{
    return m_z;
}

/*!
 * @brief This function returns a reference to member z
 * @return Reference to member z
 */
float& idl_msg::Velocity::z()
{
    return m_z;
}


size_t idl_msg::Velocity::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool idl_msg::Velocity::isKeyDefined()
{
    return false;
}

void idl_msg::Velocity::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}

