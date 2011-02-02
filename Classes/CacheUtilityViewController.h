//
//  CacheUtilityViewController.h
//  CacheUtility
//
//  Created by Fernando Ribeiro on 01/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CacheUtil.h"

@interface CacheUtilityViewController : UIViewController {
	IBOutlet UITextField *text;
	IBOutlet UILabel *cached_text;
	IBOutlet UIButton *submit;
	IBOutlet UIButton *remove_cache;
}

-(IBAction)submit_text;

@end

