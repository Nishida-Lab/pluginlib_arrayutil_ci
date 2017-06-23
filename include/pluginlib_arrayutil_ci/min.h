#ifndef PLUGINLIB_ARRAYUTIL_CI_MIN_H_
#define PLUGINLIB_ARRAYUTIL_CI_MIN_H_

#include <pluginlib_arrayutil_ci/arrayutil_base.h>

namespace arrayutil_plugins_ci_min 
{
  class Min : public arrayutil_ci_base::ArrayUtil
  {
    public:
      Min();
      void loadArray();
      double operate();
  };
}

#endif
