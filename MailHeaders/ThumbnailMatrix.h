/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSMatrix.h"

@interface ThumbnailMatrix : NSMatrix
{
    BOOL shouldShowButtons;
}

- (void)awakeFromNib;
- (void)highlightCell:(BOOL)arg1 atRow:(long)arg2 column:(long)arg3;
- (void)showDeleteButtons:(BOOL)arg1 beginningAtIndex:(long)arg2;
- (void)_addButtonAtIndex:(long)arg1;
- (struct CGRect)frameOfThumbnailAtIndex:(long)arg1;
- (BOOL)_performDragFromMouseDown:(id)arg1;

@end

