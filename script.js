function sendOTP() {
    let phoneNumber = document.getElementById('phoneNumber').value;
    // Perform validation on phone number

    // Generate OTP
    let otp = Math.floor(1000 + Math.random()* 9000);
    // Send OTP through message code
    alert(`OTP sent to ${phoneNumber}:${otp}`);
}