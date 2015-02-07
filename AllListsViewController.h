//
//  AllListsViewController.h
//  Checklists
//
//  Created by Haozhe Xu on 1/27/15.
//  Copyright (c) 2015 Razeware LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"

@class DataModel;

@interface AllListsViewController : UITableViewController <ListDetailViewControllerDelegate,UINavigationControllerDelegate>
- (void)saveChecklists;

@property (nonatomic, strong) DataModel *dataModel;

@end
