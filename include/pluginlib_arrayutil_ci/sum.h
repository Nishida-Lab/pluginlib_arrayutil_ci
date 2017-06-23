#ifndef PLUGINLIB_ARRAYUTIL_CI_SUM_H_
#define PLUGINLIB_ARRAYUTIL_CI_SUM_H_

#include <pluginlib_arrayutil_ci/arrayutil_base.h>

namespace arrayutil_plugins_ci_sum 
{
  class Sum : public arrayutil_ci_base::ArrayUtil
  {
    public:
      Sum();
      double operate();
  };
}

#endif
