const url="https://api.openweathermap.org/data/2.5/weather?q=mumbai&appid=1c65eb6a0470a50b11f86b11978fcedd&units=metric"

let URL;
// let data;
const header="https://api.openweathermap.org/data/2.5/weather?q=";
const apiKey="appid=1c65eb6a0470a50b11f86b11978fcedd";
let cityName;
const headerUnits="units=metric";
let searchButton=document.querySelector("#searchBtn");

searchButton.addEventListener('click',()=>{
  let searchData= document.querySelector("#cityyy input");
  let cityValue=searchData.value;
  sendCityName(cityValue);
  
})

function sendCityName(name){
  URL=header+name+`&`+apiKey+`&`+headerUnits;
  getApiData(URL);
}

async function getApiData(url){
  let response=await fetch(url);
  let data= await response.json();

  console.log(data);
  document.querySelector(".humidity").innerHTML=`${data.main.humidity} %`;
  document.querySelector(".wind").innerHTML=`${data.wind.speed} Km/h`;
  document.querySelector(".temp").innerHTML=`${data.main.temp}°`;
  document.querySelector(".city").innerHTML=`${data.name}`;
  document.querySelector(".weather").style.display="block";
}




