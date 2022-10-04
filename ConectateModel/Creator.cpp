/**
 * Project Untitled
 */

#include "pch.h"
#include "Creator.h"

/**
 * Creator implementation
 */

ConectateModel::Creator::Creator()
{
    
}

ConectateModel::Creator::Creator(int id, String^ name, int creatorid)
{
    this->PucpId = id;
    this->Account = name;
    this->CreatorId = creatorid;
}
