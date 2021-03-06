//
//  PSMOverflowPopUpButton.h
//  PSMTabBarControl
//
//  Created by John Pannell on 11/4/05.
//  Copyright 2005 Positive Spin Media. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PSMOverflowPopUpButton : NSPopUpButton {
    NSImage         *_PSMTabBarOverflowPopUpImage;
    NSImage         *_PSMTabBarOverflowDownPopUpImage;
    BOOL            _down;
}

// archiving
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
@end
