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

#include "system_defined_form.h"

namespace OHOS {
namespace UDMF {
SystemDefinedForm::SystemDefinedForm()
{
    this->dataType_ = SYSTEM_DEFINED_FORM;
}

int64_t SystemDefinedForm::GetSize()
{
    return UnifiedDataUtils::GetDetailsSize(this->details_) + sizeof(formId_) + this->formName_.size()
           + this->bundleName_.size() + this->abilityName_.size() + this->module_.size();
}

int32_t SystemDefinedForm::GetFormId() const
{
    return this->formId_;
}

void SystemDefinedForm::SetFormId(const int32_t &formId)
{
    this->formId_ = formId;
}

std::string SystemDefinedForm::GetFormName() const
{
    return this->formName_;
}

void SystemDefinedForm::SetFormName(const std::string &formName)
{
    this->formName_ = formName;
}

std::string SystemDefinedForm::GetBundleName() const
{
    return this->bundleName_;
}

void SystemDefinedForm::SetBundleName(const std::string &bundleName)
{
    this->bundleName_ = bundleName;
}

std::string SystemDefinedForm::GetAbilityName() const
{
    return this->abilityName_;
}

void SystemDefinedForm::SetAbilityName(const std::string &abilityName)
{
    this->abilityName_ = abilityName;
}

std::string SystemDefinedForm::GetModule() const
{
    return this->module_;
}

void SystemDefinedForm::SetModule(const std::string &module)
{
    this->module_ = module;
}
} // namespace UDMF
} // namespace OHOS
