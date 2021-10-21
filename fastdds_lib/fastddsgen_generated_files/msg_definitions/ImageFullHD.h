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
 * @file ImageFullHD.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IMAGEFULLHD_H_
#define _IMAGEFULLHD_H_

#include "Header.h"

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(ImageFullHD_SOURCE)
#define ImageFullHD_DllAPI __declspec( dllexport )
#else
#define ImageFullHD_DllAPI __declspec( dllimport )
#endif // ImageFullHD_SOURCE
#else
#define ImageFullHD_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ImageFullHD_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


const int32_t fullhd_img_size = 1920*1080*3;
/*!
 * @brief This class represents the structure ImageFullHD defined by the user in the IDL file.
 * @ingroup IMAGEFULLHD
 */
class ImageFullHD
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ImageFullHD();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ImageFullHD();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ImageFullHD that will be copied.
     */
    eProsima_user_DllExport ImageFullHD(
            const ImageFullHD& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ImageFullHD that will be copied.
     */
    eProsima_user_DllExport ImageFullHD(
            ImageFullHD&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ImageFullHD that will be copied.
     */
    eProsima_user_DllExport ImageFullHD& operator =(
            const ImageFullHD& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ImageFullHD that will be copied.
     */
    eProsima_user_DllExport ImageFullHD& operator =(
            ImageFullHD&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    eProsima_user_DllExport void header(
            const Header& _header);

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    eProsima_user_DllExport void header(
            Header&& _header);

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    eProsima_user_DllExport const Header& header() const;

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    eProsima_user_DllExport Header& header();
    /*!
     * @brief This function copies the value in member frame
     * @param _frame New value to be copied in member frame
     */
    eProsima_user_DllExport void frame(
            const std::array<uint8_t, fullhd_img_size>& _frame);

    /*!
     * @brief This function moves the value in member frame
     * @param _frame New value to be moved in member frame
     */
    eProsima_user_DllExport void frame(
            std::array<uint8_t, fullhd_img_size>&& _frame);

    /*!
     * @brief This function returns a constant reference to member frame
     * @return Constant reference to member frame
     */
    eProsima_user_DllExport const std::array<uint8_t, fullhd_img_size>& frame() const;

    /*!
     * @brief This function returns a reference to member frame
     * @return Reference to member frame
     */
    eProsima_user_DllExport std::array<uint8_t, fullhd_img_size>& frame();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const ImageFullHD& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    Header m_header;
    std::array<uint8_t, fullhd_img_size> m_frame;
};

#endif // _IMAGEFULLHD_H_