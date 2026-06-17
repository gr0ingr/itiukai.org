// main.cpp - C++ Version of the JavaScript Code
// Note: C++ is a compiled language, not a scripting language.
// This demonstrates the LOGIC in C++ style with comments

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Base URL
const string EX_URL = "https://itiukai.gujarat.gov.in";

// Structure for Slider Image
struct SliderImage {
    string src;
    string alt;
    string caption;
};

// Structure for Trade
struct Trade {
    string name;
    string img;
    string duration;
    string qual;
    string desc;
};

// HTML Builder Class (Simulates DOM manipulation)
class HTMLBuilder {
public:
    // Method to generate CSS links
    static string getCSSLinks() {
        return R"(
            <link id="styleCss" rel="stylesheet" href=")" + EX_URL + R"(/css/style.css?v=3">
            <link id="bootstrapCss" rel="stylesheet" href=")" + EX_URL + R"(/css/bootstrap.css?v=5">
            <link id="customCss" rel="stylesheet" href=")" + EX_URL + R"(/css/custom.css?v=7">
            <link id="tradeholderCss" rel="stylesheet" href=")" + EX_URL + R"(/css/tradeholder.css">
            <link id="nanogalleryCss" rel="stylesheet" href=")" + EX_URL + R"(/css/nanogallery.css">
            <link id="viewboxCss" rel="stylesheet" href=")" + EX_URL + R"(/css/viewbox.css?v=5">
            <link id="owlCarouselCss" rel="stylesheet" href=")" + EX_URL + R"(/css/owl.carousel.css">
            <link id="owlThemeCss" rel="stylesheet" href=")" + EX_URL + R"(/css/owl.theme.css">
            <link id="flexsliderCss" rel="stylesheet" href=")" + EX_URL + R"(/css/flexslider.css">
            <link id="newsPanelCss" rel="stylesheet" href=")" + EX_URL + R"(/css/news-panel.css">
        )";
    }
    
    // Method to generate JS links
    static string getJSLinks() {
        return R"(
            <script id="jqueryJs" src=")" + EX_URL + R"(/admin/jquery/jquery.js?v=2"></script>
            <script id="bootstrapJs" src=")" + EX_URL + R"(/admin/bootstrap/js/bootstrap.min.js?v=2"></script>
            <script id="nanogalleryJs" src=")" + EX_URL + R"(/js/jquery.nanogallery.js"></script>
            <script id="viewboxJs" src=")" + EX_URL + R"(/js/jquery.viewbox.js?v=1"></script>
            <script id="headerJs" src=")" + EX_URL + R"(/js/header.js?v=2"></script>
            <script id="owlCarouselJs" src=")" + EX_URL + R"(/js/owl.carousel.js"></script>
            <script id="flexsliderJs" src=")" + EX_URL + R"(/js/jquery.flexslider.js"></script>
            <script id="easingJs" src=")" + EX_URL + R"(/js/jquery.easing.js"></script>
            <script id="mousewheelJs" src=")" + EX_URL + R"(/js/jquery.mousewheel.js"></script>
            <script id="indexJs" src=")" + EX_URL + R"(/js/index.js?v=3"></script>
            <script id="marqueeJs" src=")" + EX_URL + R"(/js/jquery.marquee.js"></script>
            <script id="newsPanelJs" src=")" + EX_URL + R"(/js/news-panel.js"></script>
        )";
    }
    
    // Generate Slider HTML
    static string generateSliderHTML(const vector<SliderImage>& images) {
        string html = "<div class=\"flexslider\"><ul class=\"slides\">";
        for (const auto& img : images) {
            html += R"(
                <li>
                    <img src=")" + EX_URL + img.src + R"(" class="img-responsive" alt=")" + img.alt + R"(" />
                    <div class="flex-caption"><div class="flex-text">)" + img.caption + R"(</div></div>
                </li>
            )";
        }
        html += "</ul></div>";
        return html;
    }
    
    // Generate Welcome Content
    static string getWelcomeContent() {
        return R"(
            આઈ.ટી.આઈ ઉકાઈ ૦૬-૦૭-૧૯૮૩ ના રોજ શરૂ કરવામાં આવી હતી, જેમાં ૬ એન્જીનીયરીંગ ટ્રેડ હતા અને કુલ ભરવાપાત્ર બેઠકો ૧૮૦. સંસ્થાનું નવીનીકરણ અને સુદ્રઢ રીતે વિકાસ કરવાના હેતુથી નજીકની ઇન્ડસ્ટ્રી <a target="_blank" href="http://www.jkpaper.com/">JK Paper Ltd.</a> સાથે પબ્લિક પ્રાઈવેટ પાર્ટનર શીપ સ્કીમ અંતર્ગત સંલગ્ન થઈ. 
            સમયાંતરે નવા ટ્રેડ શરૂ કરવામાં આવ્યા હાલમાં કુલ ૧૧ ટ્રેડ છે.
            <table class="table" style="margin-bottom:0;padding:0;width:auto;">
                <tbody>
                    <tr><td style="border-top:none;"><span class="text-success">First Shift time</span></td><td style="border-top:none;"><span class="glyphicon glyphicon-time"></span> <em>07:30AM to 2:45PM</em></td></tr>
                    <tr><td><span class="text-success">Second Shift time</span></td><td><span class="glyphicon glyphicon-time"></span> <em>09:30AM to 05:15PM</em></td></tr>
                    <tr><td><span class="text-success">Third Shift time</span></td><td><span class="glyphicon glyphicon-time"></span> <em>01:45PM to 08:30PM</em></td></tr>
                </tbody>
            </table>
        )";
    }
    
    // Generate Trades HTML
    static string generateTradesHTML(const vector<Trade>& trades) {
        string html = "<div class=\"row\">";
        for (const auto& trade : trades) {
            html += R"(
                <div class="col-md-6 col-lg-6">
                    <div class="holder smooth">
                        <img src=")" + EX_URL + trade.img + R"(" class="img-responsive">
                        <div class="go-top">
                            <div class="caption_height">
                                <h5>)" + trade.name + R"(</h5>
                                <h6><label class='text-info'>Duration: </label>)" + trade.duration + R"( | <label class='text-info'>Qualification: </label>)" + trade.qual + R"(</h6>
                            </div>    
                            <div class="text-left" style="padding:10px;font-size:13px;">
                                )" + trade.desc + R"(
                            </div>
                        </div>
                    </div>
                </div>
            )";
        }
        html += "</div>";
        return html;
    }
    
    // Generate Footer Content
    static string getFooterContent() {
        return R"(
            <div class="col-lg-3 col-md-4">
                <h5 class="title-widget">Directorate of Employment Training</h5>
                <hr style="margin:5px 0;width:80%;" >		
                <address>
                    Block No. : 1, 3rd floor, Dr.Jivraj Mehta Bhavan, <br />Gandhinagar, Ahmedabad<br>
                    <strong>Phone</strong>: (079) 232-538-12<br>
                    <strong>Fax</strong>: (079) 232-538-35<br>
                    <strong>Web</strong>: <a target="_blank" href="http://www.talimrojgar.org/">www.talimrojgar.org</a>
                </address>
            </div>
            <div class="col-lg-3 col-md-4">
                <h5 class="title-widget">Webmaster</h5>
                <hr style="margin:5px 0;width:80%;" >		
                <address>
                    <strong>Email</strong>: <a href="mailto:prlukaiiti[at]yahoo[dot]co[dot]in">prlukaiiti[at]yahoo[dot]co[dot]in</a><br>
                    <strong>Web Control</strong>: <a target="_blank" href=")" + EX_URL + R"(/admin/index.php">Click Here</a><br />
                    <strong>Send SMS</strong>: <a target="_blank" href="https://sms.thinktreksolutions.in/login/">Click Here</a>
                </address>
            </div>
            <div class="col-lg-3 col-md-4">
                <h5 class="title-widget"> :: Govt. ITI UKAI ::</h5>
                <hr style="margin:5px 0;width:80%;" >		
                <address>
                    Govt. ITI UKAI, <br>NR. Lal Tekari, BHD. Jivansadhana Vidyalaya - Ukai, <br>Ta. Sonagadh, Di. Tapi 394680, <br>Gujarat - India<br>
                    <strong>Contact No.</strong>: 02624-233153, 02624-233047<br>
                    <strong>Email</strong>: <a href="mailto:prlukaiiti[at]yahoo[dot]co[dot]in">prlukaiiti[at]yahoo[dot]co[dot]in</a>
                </address>
            </div>
            <div class="col-lg-3 col-md-4">
                <h5 class="title-widget"> Activities & Initiatives</h5>
                <hr style="margin:5px 0;width:80%;" >		
                <img src=")" + EX_URL + R"(/images/g20.jpg" width="160" title="g20" height="110">
            </div>
        )";
    }
    
    // Generate Navigation Menu
    static string getNavigationMenu() {
        return R"(
            <li class="active"><a href=")" + EX_URL + R"(/index.php">Home</a></li>
            <li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown">Institute<span class="caret"></span></a>
                <ul class="dropdown-menu"><li><a href=")" + EX_URL + R"(/aboutus.php">About us</a></li><li><a href=")" + EX_URL + R"(/infrastructure.php">Infrastructure</a></li></ul>
            </li>
            <li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown">Trades<span class="caret"></span></a>
                <ul class="dropdown-menu"><li><a href=")" + EX_URL + R"(/trades_affiliated_to_ncvt.php">Trades Affiliated to NCVT</a></li></ul>
            </li>
            <li><a href=")" + EX_URL + R"(/photo-gallery.php">Gallery</a></li>
            <li><a href=")" + EX_URL + R"(/contact-us.php">Contact</a></li>
        )";
    }
    
    // Generate Advertisement Modal
    static string getAdvertisementModal() {
        return R"(
            <div id="advertisementModal" class="modal fade">
                <div class="modal-dialog">
                    <div class="modal-content">
                        <div class="modal-header">
                            <button type="button" class="close" data-dismiss="modal">&times;</button>
                            <h4 class="modal-title">Job Advertisement</h4>
                        </div>
                        <div class="modal-body">
                            <img src=")" + EX_URL + R"(/iti-includes/pravasi-si/active/iti-job-advertisement.jpg?v=3" class="img-responsive">
                            <p>Contact: 02624-233153, 02624-233047</p>
                            <p>Email: <a href="mailto:prlukaiiti[at]yahoo[dot]co[dot]in">prlukaiiti[at]yahoo[dot]co[dot]in</a></p>
                            <a id="downloadLink" href=")" + EX_URL + R"(/iti-includes/pravasi-si/active/call-file-dialog.php" class="btn btn-primary">Download Details</a>
                        </div>
                    </div>
                </div>
            </div>
        )";
    }
};

// Main function
int main() {
    cout << "Content-Type: text/html\n\n";
    
    // Data Initialization
    vector<SliderImage> sliderImages = {
        {"/albums/22/slider/0_39409100_1554438796.jpg", "Electrician Trade", "Electrician Trade"},
        {"/albums/23/slider/0_15361800_1575984361.jpeg", "Bharti mela", "Bharti mela On 6th December 2019"},
        {"/albums/29/slider/0_07858700_1663839723.jpeg", "Voter ID program", "Voter ID registration program"},
        {"/albums/30/slider/0_43105500_1663839986.jpeg", "Convocation", "CONVOCATION CEREMONY 2022"},
        {"/albums/32/slider/0_25040300_1678776586.jpg", "Skill Exhibition", "Skill Exhibition under G20"}
    };
    
    vector<Trade> trades = {
        {"Armature And Motor Rewinding", "/images/trades/iti-ukai-arm.jpg", "2 SEM", "8th", "રોજગારની તકો: તાલીમાર્થી સ્વતંત્ર વ્યવસાય કરી શકે..."},
        {"COPA (Computer Operator)", "/images/trades/copa-trade-of-iti-ukai.jpg", "2 SEM", "10th", "રોજગારની તકો: Computer Operator તરીકે..."},
        {"Fitter", "/images/trades/fitter-trade-of-ukai.jpg", "4 SEM", "10th", "રોજગારની તકો: નાના તેમજ મોટા ઔધોગિક એકમો માં ફીટર તરીકે..."},
        {"Sewing Technology", "/images/trades/ukai-sewing-technology.jpg", "2 SEM", "8th", "રોજગારની તકો: ગારમેન્ટ ઈન્ડસ્ટ્રીઝમાં કટર, મશીન ઓપરેટર..."},
        {"Wireman", "/images/trades/iti-ukai-wireman.jpg", "4 SEM", "8th", "રોજગારની તકો: જી.ઈ.બી., નગરપાલીકા..."},
        {"Welder", "/images/trades/iti-ukai-welder.jpg", "2 SEM", "10th", "રોજગારની તકો: ONGC, Essar steel, L&T..."},
        {"AOCP (Chemical Plant)", "/images/trades/iti-ukai-aocp.jpg", "4 SEM", "10th", "રોજગારની તકો: ONGC, HPCL, IOCL, Reliance..."},
        {"Electronics Mechanic", "/images/trades/iti-ukai-etn.jpg", "4 SEM", "10th", "રોજગારની તકો: જી.ઈ.બી., નગરપાલીકા..."}
    };
    
    // Generate Complete HTML Page
    cout << R"(
    <!DOCTYPE html>
    <html lang="gu">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Govt. ITI UKAI</title>
    )";
    
    // CSS Links
    cout << HTMLBuilder::getCSSLinks();
    
    cout << R"(
    </head>
    <body>
        <!-- Navigation -->
        <nav class="navbar navbar-default">
            <div class="container-fluid">
                <div class="navbar-header">
                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNavbar">
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <a class="navbar-brand" href=")" << EX_URL << R"(/">
                        <img id="logoImg" src=")" << EX_URL << R"(/images/logo.png?v=2" alt="Logo" style="height:40px;">
                    </a>
                </div>
                <div class="collapse navbar-collapse" id="myNavbar">
                    <ul class="nav navbar-nav" id="navMenu">
    )";
    
    cout << HTMLBuilder::getNavigationMenu();
    
    cout << R"(
                    </ul>
                </div>
            </div>
        </nav>
        
        <!-- Popup Modal -->
        <div id="myModal" class="modal fade" role="dialog">
            <div class="modal-dialog">
                <div class="modal-content">
                    <div class="modal-body">
                        <img id="popupImg" src=")" << EX_URL << R"(/images/deshkagarv.jpeg" class="img-responsive">
                    </div>
                </div>
            </div>
        </div>
        
        <!-- Slider -->
    )";
    
    cout << HTMLBuilder::generateSliderHTML(sliderImages);
    
    cout << R"(
        <!-- Welcome Section -->
        <div class="container">
            <div class="row">
                <div class="col-md-12">
                    <div id="welcomeContent">
    )";
    
    cout << HTMLBuilder::getWelcomeContent();
    
    cout << R"(
                    </div>
                </div>
            </div>
            
            <!-- Trades Section -->
            <div id="tradesContainer">
    )";
    
    cout << HTMLBuilder::generateTradesHTML(trades);
    
    cout << R"(
            </div>
        </div>
        
        <!-- Footer -->
        <footer>
            <div class="container">
                <div class="row" id="footerContent">
    )";
    
    cout << HTMLBuilder::getFooterContent();
    
    cout << R"(
                </div>
            </div>
        </footer>
        
        <!-- Advertisement Modal -->
    )";
    
    cout << HTMLBuilder::getAdvertisementModal();
    
    cout << R"(
        <!-- JavaScript -->
    )";
    
    cout << HTMLBuilder::getJSLinks();
    
    cout << R"(
        <script>
            // Popup on load
            $(window).on('load', function() {
                $('#myModal').modal('show');
            });
        </script>
    </body>
    </html>
    )";
    
    return 0;
}
