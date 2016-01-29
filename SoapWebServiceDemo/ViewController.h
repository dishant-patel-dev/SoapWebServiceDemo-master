//
//  ViewController.h
//  SoapWebServiceDemo
//
//  Created by iOSFundamentals on 25/04/14.
//  Copyright (c) 2014 iOSFundamentals. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSXMLParserDelegate>

@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@property (weak, nonatomic) IBOutlet UITextField *celsiusText;
@end
