
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRamaeraLocationSpec.h"

@interface RamaeraLocation : NSObject <NativeRamaeraLocationSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RamaeraLocation : NSObject <RCTBridgeModule>
#endif

@end
