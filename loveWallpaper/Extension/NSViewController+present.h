//
//  NSViewController+present.h
//  loveWallpaper
//
//  Created by xiaowen on 2018/6/21.
//  Copyright © 2018年 lovebizi. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSViewController (present)
- (void)loadView;
- (void)presentViewController:(NSViewController *)viewController;
- (void)dismiss;
@end
