//
//  Target_A.h
//  A
//
//  Created by KADFWJ on 2018/1/23.
//  Copyright © 2018年 Lemon Fan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//我们在A工程中创建一个文件夹：Targets，然后看到A_Category里面有performTarget:@"A"，所以我们新建一个对象，叫做Target_A。
@interface Target_A : NSObject

//对应的Action是viewController，于是在Target_A中新建一个方法：Action_viewController
- (UIViewController *)Action_viewController:(NSDictionary *)params;

@end
