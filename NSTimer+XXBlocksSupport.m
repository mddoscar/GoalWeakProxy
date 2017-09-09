//
//  NSTimer+XXBlocksSupport.m
//  Printer3D
//
//  Created by mac on 2017/1/10.
//  Copyright © 2017年 mdd.oscar. All rights reserved.
//

#import "NSTimer+XXBlocksSupport.h"

@implementation NSTimer (XXBlocksSupport)
+ (NSTimer *)xx_scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                         block:(void(^)())block
                                       repeats:(BOOL)repeats
{
    return [self scheduledTimerWithTimeInterval:interval
                                         target:self
                                       selector:@selector(xx_blockInvoke:)
                                       userInfo:[block copy]
                                        repeats:repeats];
}
+ (void)xx_blockInvoke:(NSTimer *)timer {
    void (^block)() = timer.userInfo;
    if(block) {
        block();
    }
}
@end
