/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTextField.h"

@interface AutosizingTextField : NSTextField
{
    float _minimumHeight;
}

- (void)_editorResized;
- (void)_adjustWidth:(float)arg1 ofEditor:(id)arg2;
- (void)_adjustWidthBy:(float)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)_setupTextView:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (float)minimumHeight;
- (void)setMinimumHeight:(float)arg1;

@end

