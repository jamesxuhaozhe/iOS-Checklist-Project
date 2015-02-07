//
//  IconPickerViewController.h
//  Checklists
//
//  Created by Haozhe Xu on 1/31/15.
//  Copyright (c) 2015 Razeware LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IconPickerViewController;
@protocol IconPickerViewControllerDelegate <NSObject>
- (void)iconPicker:(IconPickerViewController *)picker
       didPickIcon:(NSString *)iconName;
@end

@interface IconPickerViewController : UITableViewController

@property (nonatomic, weak) id
<IconPickerViewControllerDelegate> delegate;

@end
