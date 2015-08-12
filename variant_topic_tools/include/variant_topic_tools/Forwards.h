/******************************************************************************
 * Copyright (C) 2014 by Ralf Kaestner                                        *
 * ralf.kaestner@gmail.com                                                    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or modify       *
 * it under the terms of the Lesser GNU General Public License as published by*
 * the Free Software Foundation; either version 3 of the License, or          *
 * (at your option) any later version.                                        *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               *
 * Lesser GNU General Public License for more details.                        *
 *                                                                            *
 * You should have received a copy of the Lesser GNU General Public License   *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.       *
 ******************************************************************************/

/** \file Forwards.h
  * \brief Header file providing forward declarations for the variant topic
  *   tools
  */

#ifndef VARIANT_TOPIC_TOOLS_FORWARDS_H
#define VARIANT_TOPIC_TOOLS_FORWARDS_H

#include <ros/forwards.h>

namespace variant_topic_tools {
  /** \brief Forward declaration of the data type
    */
  class DataType;
  
  /** \brief Forward declaration of the data type registry
    */
  class DataTypeRegistry;
  
  /** \brief Forward declaration of the message field collection
    */
  template <typename T> class MessageFieldCollection;
  
  /** \brief Forward declaration of the message field
    */
  template <typename T> class MessageField;
  
  /** \brief Forward declaration of the message definition
    */
  class MessageDefinition;
  /** \brief Forward declaration of the message definition pointer type
    */
  typedef boost::shared_ptr<MessageDefinition> MessageDefinitionPtr;
  /** \brief Forward declaration of the message definition weak pointer type
    */
  typedef boost::weak_ptr<MessageDefinition> MessageDefinitionWPtr;
  
  /** \brief Forward declaration of the variant
    */
  class Variant;
  /** \brief Forward declaration of the variant pointer type
    */
  typedef boost::shared_ptr<Variant> VariantPtr;
  /** \brief Forward declaration of the variant weak pointer type
    */
  typedef boost::weak_ptr<Variant> VariantWPtr;
};

#endif
