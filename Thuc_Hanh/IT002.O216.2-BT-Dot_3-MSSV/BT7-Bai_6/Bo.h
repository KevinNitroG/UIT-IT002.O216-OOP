#pragma once
#include "GiaSuc.h"
#include <string>

#define TIENG_KEU_BO "Boooooo"
#define MAX_SUA_BO 20

class Bo : public GiaSuc
{
  private:
    string loai;

  public:
    Bo() : GiaSuc(0, MAX_SUA_BO, "Bo")
    {
    }
    ~Bo() = default;
    void keu() const override;
};
