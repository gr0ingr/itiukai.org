// js/main.js
const exURL = "https://itiukai.gujarat.gov.in";

// Set all dynamic URLs using exURL
document.addEventListener("DOMContentLoaded", function() {
    
    // CSS Files
    document.getElementById("styleCss").href = exURL + "/css/style.css?v=3";
    document.getElementById("bootstrapCss").href = exURL + "/css/bootstrap.css?v=5";
    document.getElementById("customCss").href = exURL + "/css/custom.css?v=7";
    document.getElementById("tradeholderCss").href = exURL + "/css/tradeholder.css";
    document.getElementById("nanogalleryCss").href = exURL + "/css/nanogallery.css";
    document.getElementById("viewboxCss").href = exURL + "/css/viewbox.css?v=5";
    document.getElementById("owlCarouselCss").href = exURL + "/css/owl.carousel.css";
    document.getElementById("owlThemeCss").href = exURL + "/css/owl.theme.css";
    document.getElementById("flexsliderCss").href = exURL + "/css/flexslider.css";
    document.getElementById("newsPanelCss").href = exURL + "/css/news-panel.css";
    
    // JS Files
    document.getElementById("jqueryJs").src = exURL + "/admin/jquery/jquery.js?v=2";
    document.getElementById("bootstrapJs").src = exURL + "/admin/bootstrap/js/bootstrap.min.js?v=2";
    document.getElementById("nanogalleryJs").src = exURL + "/js/jquery.nanogallery.js";
    document.getElementById("viewboxJs").src = exURL + "/js/jquery.viewbox.js?v=1";
    document.getElementById("headerJs").src = exURL + "/js/header.js?v=2";
    document.getElementById("owlCarouselJs").src = exURL + "/js/owl.carousel.js";
    document.getElementById("flexsliderJs").src = exURL + "/js/jquery.flexslider.js";
    document.getElementById("easingJs").src = exURL + "/js/jquery.easing.js";
    document.getElementById("mousewheelJs").src = exURL + "/js/jquery.mousewheel.js";
    document.getElementById("indexJs").src = exURL + "/js/index.js?v=3";
    document.getElementById("marqueeJs").src = exURL + "/js/jquery.marquee.js";
    document.getElementById("newsPanelJs").src = exURL + "/js/news-panel.js";
    
    // Images
    document.getElementById("faviconLink").href = exURL + "/images/favicon-16x16.png?a=1";
    document.getElementById("logoImg").src = exURL + "/images/logo.png?v=2";
    document.getElementById("popupImg").src = exURL + "/images/deshkagarv.jpeg";
    document.getElementById("advertisementImg").src = exURL + "/iti-includes/pravasi-si/active/iti-job-advertisement.jpg?v=3";
    
    // Links
    document.getElementById("homeLink").href = exURL + "/";
    
    // Slider Images
    const sliderImages = [
        { src: "/albums/22/slider/0_39409100_1554438796.jpg", alt: "Electrician Trade", caption: "Electrician Trade" },
        { src: "/albums/23/slider/0_15361800_1575984361.jpeg", alt: "Bharti mela", caption: "Bharti mela On 6th December 2019" },
        { src: "/albums/29/slider/0_07858700_1663839723.jpeg", alt: "Voter ID program", caption: "Voter ID registration program" },
        { src: "/albums/30/slider/0_43105500_1663839986.jpeg", alt: "Convocation", caption: "CONVOCATION CEREMONY 2022" },
        { src: "/albums/32/slider/0_25040300_1678776586.jpg", alt: "Skill Exhibition", caption: "Skill Exhibition under G20" }
    ];
    
    const sliderContainer = document.querySelector(".flexslider .slides");
    if(sliderContainer) {
        sliderContainer.innerHTML = "";
        sliderImages.forEach(img => {
            sliderContainer.innerHTML += `
                <li>
                    <img src="${exURL}${img.src}" class="img-responsive" alt="${img.alt}" />
                    <div class="flex-caption"><div class="flex-text">${img.caption}</div></div>
                </li>
            `;
        });
    }
    
    // Welcome Content
    document.getElementById("welcomeContent").innerHTML = `
        આઈ.ટી.આઈ ઉકાઈ ૦૬-૦૭-૧૯૮૩ ના રોજ શરૂ કરવામાં આવી હતી, જેમાં ૬ એન્જીનીયરીંગ ટ્રેડ હતા અને કુલ ભરવાપાત્ર બેઠકો ૧૮૦. સંસ્થાનું નવીનીકરણ અને સુદ્રઢ રીતે વિકાસ કરવાના હેતુથી નજીકની ઇન્ડસ્ટ્રી <a target="_blank" href="http://www.jkpaper.com/">JK Paper Ltd.</a> સાથે પબ્લિક પ્રાઈવેટ પાર્ટનર શીપ સ્કીમ અંતર્ગત સંલગ્ન થઈ. 
        સમયાંતરે નવા ટ્રેડ શરૂ કરવામાં આવ્યા હાલમાં કુલ ૧૧ ટ્રેડ છે.
        <table class="table" style="margin-bottom:0;padding:0;width:auto;">
            <tbody>
                <tr><td style="border-top:none;"><span class="text-success">First Shift time</span></td><td style="border-top:none;"><span class="glyphicon glyphicon-time"></span> <em>07:30AM to 2:45PM</em></td></tr>
                <tr><td><span class="text-success">Second Shift time</span></td><td><span class="glyphicon glyphicon-time"></span> <em>09:30AM to 05:15PM</em></td></tr>
                <tr><td><span class="text-success">Third Shift time</span></td><td><span class="glyphicon glyphicon-time"></span> <em>01:45PM to 08:30PM</em></td></tr>
            </tbody>
        </table>
    `;
    
    // Trades Data
    const trades = [
        { name: "Armature And Motor Rewinding", img: "/images/trades/iti-ukai-arm.jpg", duration: "2 SEM", qual: "8th", desc: "રોજગારની તકો: તાલીમાર્થી સ્વતંત્ર વ્યવસાય કરી શકે..." },
        { name: "COPA (Computer Operator)", img: "/images/trades/copa-trade-of-iti-ukai.jpg", duration: "2 SEM", qual: "10th", desc: "રોજગારની તકો: Computer Operator તરીકે..." },
        { name: "Fitter", img: "/images/trades/fitter-trade-of-ukai.jpg", duration: "4 SEM", qual: "10th", desc: "રોજગારની તકો: નાના તેમજ મોટા ઔધોગિક એકમો માં ફીટર તરીકે..." },
        { name: "Sewing Technology", img: "/images/trades/ukai-sewing-technology.jpg", duration: "2 SEM", qual: "8th", desc: "રોજગારની તકો: ગારમેન્ટ ઈન્ડસ્ટ્રીઝમાં કટર, મશીન ઓપરેટર..." },
        { name: "Wireman", img: "/images/trades/iti-ukai-wireman.jpg", duration: "4 SEM", qual: "8th", desc: "રોજગારની તકો: જી.ઈ.બી., નગરપાલીકા..." },
        { name: "Welder", img: "/images/trades/iti-ukai-welder.jpg", duration: "2 SEM", qual: "10th", desc: "રોજગારની તકો: ONGC, Essar steel, L&T..." },
        { name: "AOCP (Chemical Plant)", img: "/images/trades/iti-ukai-aocp.jpg", duration: "4 SEM", qual: "10th", desc: "રોજગારની તકો: ONGC, HPCL, IOCL, Reliance..." },
        { name: "Electronics Mechanic", img: "/images/trades/iti-ukai-etn.jpg", duration: "4 SEM", qual: "10th", desc: "રોજગારની તકો: જી.ઈ.બી., નગરપાલીકા..." }
    ];
    
    const tradesContainer = document.getElementById("tradesContainer");
    if(tradesContainer) {
        tradesContainer.className = "row";
        tradesContainer.innerHTML = "";
        trades.forEach(trade => {
            tradesContainer.innerHTML += `
                <div class="col-md-6 col-lg-6">
                    <div class="holder smooth">
                        <img src="${exURL}${trade.img}" class="img-responsive">
                        <div class="go-top">
                            <div class="caption_height">
                                <h5>${trade.name}</h5>
                                <h6><label class='text-info'>Duration: </label>${trade.duration} | <label class='text-info'>Qualification: </label>${trade.qual}</h6>
                            </div>    
                            <div class="text-left" style="padding:10px;font-size:13px;">
                                ${trade.desc}
                            </div>
                        </div>
                    </div>
                </div>
            `;
        });
    }
    
    // Footer Content
    document.getElementById("footerContent").innerHTML = `
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
                <strong>Web Control</strong>: <a target="_blank" href="${exURL}/admin/index.php">Click Here</a><br />
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
            <img src="${exURL}/images/g20.jpg" width="160" title="g20" height="110">
        </div>
    `;
    
    // Navigation Menu
    const navMenu = document.getElementById("navMenu");
    if(navMenu) {
        navMenu.innerHTML = `
            <li class="active"><a href="${exURL}/index.php">Home</a></li>
            <li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown">Institute<span class="caret"></span></a>
                <ul class="dropdown-menu"><li><a href="${exURL}/aboutus.php">About us</a></li><li><a href="${exURL}/infrastructure.php">Infrastructure</a></li></ul>
            </li>
            <li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown">Trades<span class="caret"></span></a>
                <ul class="dropdown-menu"><li><a href="${exURL}/trades_affiliated_to_ncvt.php">Trades Affiliated to NCVT</a></li></ul>
            </li>
            <li><a href="${exURL}/photo-gallery.php">Gallery</a></li>
            <li><a href="${exURL}/contact-us.php">Contact</a></li>
        `;
    }
    
    // Advertisement Modal
    document.getElementById("downloadLink").href = exURL + "/iti-includes/pravasi-si/active/call-file-dialog.php";
    document.getElementById("advertisementContact").innerHTML = `
        <p>Contact: 02624-233153, 02624-233047</p>
        <p>Email: <a href="mailto:prlukaiiti[at]yahoo[dot]co[dot]in">prlukaiiti[at]yahoo[dot]co[dot]in</a></p>
    `;
    
    // Popup Modal
    $(window).on('load', function() {
        $('#myModal').modal('show');
    });
});
