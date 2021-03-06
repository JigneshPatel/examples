//
//  CustomOpenGLView.h
//  CustomOpenGLView
//
//  Created by Doug Richardson on 12/29/10.
//  Copyright 2010 Doug Richardson. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface CustomOpenGLView : NSView
{
@private
	NSOpenGLContext* _openGLContext;
	NSOpenGLPixelFormat* _pixelFormat;
}

- (id)initWithFrame:(NSRect)frame pixelFormat:(NSOpenGLPixelFormat*)pixelFormat;

@end
