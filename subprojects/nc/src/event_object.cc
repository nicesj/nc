/*
 * Copyright 2021 nicesj
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <nc/event_object>

namespace nc {

EventObject::EventObject(int handle)
    : handle(handle)
{
}

EventObject::EventObject(void)
    : handle(-1)
{
}

EventObject::~EventObject(void)
{
}

int EventObject::Handle(void) const
{
    return handle;
}

} // namespace nc

/* http://vimdoc.sourceforge.net/htmldoc/options.html#modeline */
/* vim: set ft=cpp fdm=syntax : */
