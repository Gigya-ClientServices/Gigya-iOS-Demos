//
//  AppDelegate.h
//  Gigya-iOS-Demos
//
//  Created by Jay Reardon & Giovanni Alvarez on 12/22/14.
//  Copyright (c) 2014 Gigya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)alertForView:(UIViewController *)view title:(NSString*)ttl message:(NSString*)msg button:(NSString*)btn;

@end

