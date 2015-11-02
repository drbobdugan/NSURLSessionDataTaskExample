//
//  AppDelegate.h
//  NSURLSessionDataTaskExample
//
//  Created by Bob Dugan on 11/2/15.
//  Copyright © 2015 Bob Dugan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BackgroundTimeRemainingUtility.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, copy) void (^backgroundCompletionHandler)(void);


@end

