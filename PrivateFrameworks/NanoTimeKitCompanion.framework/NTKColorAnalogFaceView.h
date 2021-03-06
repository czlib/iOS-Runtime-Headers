/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColorAnalogFaceView : NTKSpriteKitAnalogFaceView {
    UIColor * _complicationForegroundColor;
    UIColor * _complicationPlatterColor;
}

@property (nonatomic, readonly) NTKColorAnalogScene *analogScene;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (id)_colorComplicationViewForSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (void)_enumerateColorComplicationSlotsWithBlock:(id /* block */)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_lisaGapForState:(long long)arg1;
- (void)_loadLayoutRules;
- (void)_loadScene;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_monogramKeylinePadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_monogramReferenceFrameForState:(long long)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (bool)_supportsUnadornedSnapshot;

@end
