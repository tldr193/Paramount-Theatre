//
//  RootViewController.h
//  Paramount Theatre
//
//  Created by Moo on 6/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController {
    
    NSMutableArray *events;
    UIViewController *splash;
    
}


- (void)getData;

@end
