/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {
    unsigned int _actingAsNavBar;
    unsigned int _barHasController;
    int _barPosition;
    unsigned int _barStyle;
    UIColor *_barTintColor;
    unsigned int _barTranslucence;
    NSMutableDictionary *_customBackgroundImages;
    NSMutableDictionary *_generatedBackgroundImages;
    unsigned int _searchBarStyle;
    unsigned int _usesContiguousBarBackground;
    unsigned int _usesEmbeddedAppearance;
}

@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) UIImage *backgroundImagePrompt;
@property (nonatomic) int barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int searchBarStyle;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic) BOOL translucent;
@property (nonatomic) BOOL usesContiguousBarBackground;
@property (nonatomic) BOOL usesEmbeddedAppearance;

- (id)_backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2;
- (int)_barPosition;
- (id)_createBackgroundImageForBarStyle:(int)arg1 alpha:(float)arg2;
- (BOOL)_hasCustomBackgroundImage;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)_setBarPosition:(int)arg1;
- (void)_setBehavesAsIfSearchBarHasController:(BOOL)arg1;
- (void)_updateBackgroundImage;
- (void)_updateBackgroundImageIfPossible;
- (id)backgroundImage;
- (id)backgroundImagePrompt;
- (int)barStyle;
- (id)barTintColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTranslucent;
- (unsigned int)searchBarStyle;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSearchBarStyle:(unsigned int)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setUsesContiguousBarBackground:(BOOL)arg1;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (BOOL)usesContiguousBarBackground;
- (BOOL)usesEmbeddedAppearance;

@end
