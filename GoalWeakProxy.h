//
//  GoalWeakProxy.h
//  Printer3D
//
//  Created by mac on 2017/1/10.
//  Copyright © 2017年 mdd.oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 全局代理
 */
@interface GoalWeakProxy : NSProxy
@property (nonatomic, weak, readonly) id target;
- (instancetype)initWithTarget:(id)target;
+ (instancetype)proxyWithTarget:(id)target;
@end
