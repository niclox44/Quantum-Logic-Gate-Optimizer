function GateButtom({symbol}){
  return (<button>{symbol}</button>);
}

export default function Main(){
  return(
    <>
    <h1>Hola mundo</h1>
    <GateButtom symbol="H"/>
    <GateButtom symbol="Y"/>
    <GateButtom symbol="Z"/>
    </>
  );
}