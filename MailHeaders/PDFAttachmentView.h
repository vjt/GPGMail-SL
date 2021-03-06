/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "PDFView.h"

@class MessageAttachmentViewController;

@interface PDFAttachmentView : PDFView
{
    MessageAttachmentViewController *attachmentViewController;
    struct CGSize documentSize;
    BOOL isSizingToFit;
}

+ (void)initialize;
+ (id)viewForAttachmentViewController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)doDrawPageContent;
- (BOOL)isForEditing;
- (BOOL)shouldDisplayInline;
- (struct CGSize)desiredSizeWithMaximumWidth:(float)arg1;
- (id)menuForEvent:(id)arg1;
- (void)dealloc;
- (void)sizeToFit;
- (void)scaleFactorDidChange:(id)arg1;
- (void)pageDidChange:(id)arg1;
- (void)setDisplayMode:(long)arg1;
- (void)documentDidUnlock:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)attachmentViewController;
- (void)setAttachmentViewController:(id)arg1;

@end

