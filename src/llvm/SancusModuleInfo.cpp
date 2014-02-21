#include "SancusModuleInfo.h"

std::string SancusModuleInfo::getDataSection() const
{
    return ".sm." + name + ".data";
}

std::string SancusModuleInfo::getTextSection() const
{
    return name.empty() ? ".text" : ".sm." + name + ".text";
}

std::string SancusModuleInfo::getTableSection() const
{
    return ".sm." + name + ".table";
}

std::string SancusModuleInfo::getStackName() const
{
    return "__sm_" + name + "_stack";
}

std::string SancusModuleInfo::getSpName() const
{
    return "__sm_" + name + "_sp";
}

std::string SancusModuleInfo::getEntryName() const
{
    return "__sm_" + name + "_entry";
}

std::string SancusModuleInfo::getExitName() const
{
    return "__sm_" + name + "_exit";
}

std::string SancusModuleInfo::getVerifyName() const
{
    return "__sm_" + name + "_verify";
}

std::string SancusModuleInfo::getIndexName(const std::string& entry) const
{
    return "__sm_" + name + "_entry_" + entry + "_idx";
}

std::string SancusModuleInfo::getCalleeIdName(const std::string& callee) const
{
    return "__sm_" + name + "_id_" + callee;
}

std::string SancusModuleInfo::getCalleeMacName(const std::string& callee) const
{
    return "__sm_" + name + "_mac_" + callee;
}

std::string SancusModuleInfo::getCalleeStubName(const std::string& callee) const
{
    std::string me = name.empty() ? "__unprotected" : "__sm_" + name;
    return me + "_stub_" + callee;
}
