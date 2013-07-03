#pragma once
#include "include/global.h"
#include "DpiMsgLRPool.h"

#ifdef LR_DEBUG
class MockDpiMsgLRPool : public DpiMsgLRPool {
   public:
      MockDpiMsgLRPool() {}
      virtual ~MockDpiMsgLRPool() {}
      
      bool DpiMsgTooBig(networkMonitor::DpiMsgLR* reusedMsg,int limit) override {
         return DpiMsgLRPool::DpiMsgTooBig(reusedMsg,limit);  
      }
};
#endif
