#if !TARGET_OS_OSX

#import <UIKit/UIKit.h>

typedef UIView REAUIView;

#else // TARGET_OS_OSX [

#import <reanimated/apple/RCTUIView+Reanimated.h>

typedef RCTUIView REAUIView;

#endif // ] TARGET_OS_OSX
