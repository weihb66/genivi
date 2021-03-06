/***************************************************************************
 *
 * Copyright 2010,2011 BMW Car IT GmbH
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ****************************************************************************/

#ifndef _LAYERLIST_H_
#define _LAYERLIST_H_

#include <list>
#include "Layer.h"

typedef std::list<Layer*> LayerList;
typedef std::list<Layer*>::iterator LayerListIterator;
typedef std::list<Layer*>::const_iterator LayerListConstIterator;
typedef std::list<Layer*>::reverse_iterator LayerListReverseIterator;
typedef std::list<Layer*>::const_reverse_iterator LayerListConstReverseIterator;

#endif /* _LAYERLIST_H_ */
