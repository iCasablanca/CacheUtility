//
//  CacheUtilityAppDelegate.h
//  CacheUtility
//
//  Created by Fernando Ribeiro on 01/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CacheUtilityViewController;

@interface CacheUtilityAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CacheUtilityViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CacheUtilityViewController *viewController;

@end

