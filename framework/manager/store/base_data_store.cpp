/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

#include "base_data_store.h"

namespace OHOS {
namespace UDMF {
std::string BaseDataStore::GetStoreName() const
{
    return this->storeName_;
}

UDStoreType BaseDataStore::GetStoreType() const
{
    return this->storeType_;
}
} // namespace UDMF
} // namespace OHOS
