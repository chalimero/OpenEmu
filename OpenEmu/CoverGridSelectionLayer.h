//
//  CoverGridSelectionLayer.h
//  OpenEmuMockup
//
//  Created by Christoph Leimbrock on 02.05.11.
//  Copyright 2011 none. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CoverGridSelectionLayer : CALayer {
@private
	BOOL isInactive;
}
@property (readwrite, assign) BOOL isInactive;

@end