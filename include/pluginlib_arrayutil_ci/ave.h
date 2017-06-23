#ifndef PLUGINLIB_ARRAYUTIL_CI_AVE_H_
#define PLUGINLIB_ARRAYUTIL_CI_AVE_H_

#include <pluginlib_arrayutil_ci/arrayutil_base.h>

namespace arrayutil_plugins_ci_ave
{
  class Ave : public arrayutil_ci_base::ArrayUtil
  {
    public:
      Ave();
      double operate();
  };
}

#endif
