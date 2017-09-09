//
//  NSTimer+ XXBlocksSupport.h
//  Printer3D
//
//  Created by mac on 2017/1/10.
//  Copyright © 2017年 mdd.oscar. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 循环定时器
 */
@interface NSTimer (XXBlocksSupport)
/*
 循环执行block
 */
+ (NSTimer *)xx_scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                         block:(void(^)())block repeats:(BOOL)repeats;
@end
