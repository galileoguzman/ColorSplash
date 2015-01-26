//
//  ViewController.h
//  ColorSlide
//
//  Created by Alberto Cordero Arellanes on 26/01/15.
//  Copyright (c) 2015 AlbertoCorderoArellanes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Home : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *lblRojo;
@property (strong, nonatomic) IBOutlet UILabel *lblVerde;
@property (strong, nonatomic) IBOutlet UILabel *lblAzul;
@property (strong, nonatomic) IBOutlet UILabel *Color;



@property (strong, nonatomic) IBOutlet UISlider *sliderRojo;
@property (strong, nonatomic) IBOutlet UISlider *sliderVerde;
@property (strong, nonatomic) IBOutlet UISlider *sliderAzul;
@property (strong, nonatomic) IBOutlet UISlider *sliderAlpha;


- (IBAction)accionRojo:(id)sender;
- (IBAction)accionVerde:(id)sender;
- (IBAction)accionAzul:(id)sender;
- (IBAction)accionAlpha:(id)sender;

@end

