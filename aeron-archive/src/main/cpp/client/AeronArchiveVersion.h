/*
 * Copyright 2014-2023 Real Logic Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef AERON_ARCHIVE_VERSION_H
#define AERON_ARCHIVE_VERSION_H

#include "string"

namespace aeron { namespace archive { namespace client
{

static inline std::string aeron_archive_version_string()
{
    return AERON_VERSION_TXT;
}

static inline std::string aeron_archive_version_git_sha()
{
    return AERON_VERSION_GITSHA;
}

static inline int aeron_archive_version_major()
{
    return AERON_VERSION_MAJOR;
}

static inline int aeron_archive_version_minor()
{
    return AERON_VERSION_MINOR;
}

static inline int aeron_archive_version_patch()
{
    return AERON_VERSION_PATCH;
}

}}}

#endif //AERON_ARCHIVE_VERSION_H
