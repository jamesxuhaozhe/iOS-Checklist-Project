//
//  IconPickerViewController.m
//  Checklists
//
//  Created by Haozhe Xu on 1/31/15.
//  Copyright (c) 2015 Razeware LLC. All rights reserved.
//

#import "IconPickerViewController.h"

@interface IconPickerViewController ()

@end

@implementation IconPickerViewController{
    NSArray *_icons;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    _icons = @[
               @"No Icon",
               @"Appointments",
               @"Birthdays",
               @"Chores",
               @"Drinks",
               @"Folder",
               @"Groceries",
               @"Inbox",
               @"Photos",
               @"Trips"];
}

- (NSInteger)tableView:(UITableView *)tableView
 numberOfRowsInSection:(NSInteger)section
{
    return [_icons count];
}
- (UITableViewCell *)tableView:(UITableView *)tableView
         cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView
                             dequeueReusableCellWithIdentifier:@"IconCell"];
    NSString *icon = _icons[indexPath.row];
    cell.textLabel.text = icon;
    cell.imageView.image = [UIImage imageNamed:icon];
    return cell;
}

- (void)tableView:(UITableView *)tableView
didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *iconName = _icons[indexPath.row];
    [self.delegate iconPicker:self didPickIcon:iconName];
}

@end
