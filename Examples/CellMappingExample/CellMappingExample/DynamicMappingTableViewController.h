//
//  TableViewControllerExample.h
//  CellMappingExample
//
//  Created by Bruno Wernimont on 5/01/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BKListTableModel;

@interface DynamicMappingTableViewController : UITableViewController

@property (nonatomic, retain) BKListTableModel *tableModel;

@end
